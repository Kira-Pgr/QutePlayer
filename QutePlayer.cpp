#include "QutePlayer.h"
#include <QMediaPlayer>
#include <QVideoWidget>
QutePlayer::QutePlayer(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

void QutePlayer::Play()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("/users/OriginalPGR/Videos/fluxion.mp4"));
    player->setVolume(10);
    QVideoWidget* videoWidget = new QVideoWidget;
    player->setVideoOutput(videoWidget);
    videoWidget->show();
    player->play();
}