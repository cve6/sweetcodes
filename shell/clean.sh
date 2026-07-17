#!/bin/bash
#sudo pacman -Rsc pacote
#fiz pra atualiza e limpa o sistema, funciona pra arch
#comando pra tornar executavel: chmod +x ~/caminho/do/arquivo/clean.sh


echo "Atualizando sistema..."
sudo pacman -Syu
sudo flatpak update
echo "Acelerando downgrade..."
sudo pacman -Sc --noconfirm
echo "Limpando arquivos temporários..."
rm -rf /tmp/*
rm -rf ~/.local/share/Trash/*
gio trash --empty
echo "Apagando LIBS órfãs..."
orphans=$(pacman -Qdtq)
if [ -n "$orphans" ]; then
	sudo pacman -Rns $orphans
else
	echo "Nenhum dependência órfã encontrada."
fi
echo "Finalizado!"
