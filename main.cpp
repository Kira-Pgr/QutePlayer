#include "QutePlayer.h"
#include <QtWidgets/QApplication>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QMediaPlaylist>
#include <QResource>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QutePlayer w;
    //w.show();
    QWidget* widget = new QWidget;
    widget->resize(320, 200);
    QMediaPlayer* player = new QMediaPlayer;
    //QMediaPlaylist* playlist->player;
    QMediaPlaylist* playlist = new QMediaPlaylist();
    //playlist->addMedia(QUrl::fromLocalFile("/users/OriginalPGR/Downloads/1.mp4"));
    playlist->addMedia(QUrl::fromLocalFile("1.mp4"));
    //playlist->addMedia(QUrl(":/QutePlayer/1.mp4"));
    playlist->setCurrentIndex(1);
    //player->setMedia(QUrl::fromLocalFile("/users/OriginalPGR/Videos/q.mp4"));
    player->setPlaylist(playlist);
    player->setVolume(10);
    QVideoWidget* videoWidget = new QVideoWidget;
    player->setVideoOutput(videoWidget);
    videoWidget->show();
    videoWidget->setGeometry(100, 100, 800, 480);
    //videoWidget->setFullScreen(1);
    player->play();
    qDebug() << "mediaStatus: " << player->mediaStatus() << "error: " << player->error();
    QObject::connect(player,&QMediaPlayer::stateChanged, &QApplication::quit);
    return a.exec();
}
