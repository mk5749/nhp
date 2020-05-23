#include <QtWidgets>

#include "dialog.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

std::vector<QString> heronames;
std::vector<QFile> pnames;

Dialog::Dialog()
{
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    createHorizontalGroupBox();
    createGridGroupBox();//

    QVBoxLayout *mainLayout = new QVBoxLayout;

    mainLayout->addWidget(horizontalGroupBox);
    mainLayout->addWidget(gridGroupBox);
    setLayout(mainLayout);

    setWindowTitle(tr("NHPv0"));
}

void Dialog::b_reset(){

    QString path = qApp->applicationDirPath();
    QFile p_name1(path+"/names/1.txt");
    QFile p_name2(path+"/names/2.txt");
    QFile p_name3(path+"/names/3.txt");
    QFile p_name4(path+"/names/4.txt");
    QFile p_name5(path+"/names/5.txt");
    QFile p_name6(path+"/names/6.txt");
    QFile p_name7(path+"/names/7.txt");
    QFile p_name8(path+"/names/8.txt");
    QFile p_name9(path+"/names/9.txt");
    QFile p_name0(path+"/names/10.txt");

    QFile p_pics;

    if (!p_name1.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;
    if (!p_name2.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;
    if (!p_name3.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;
    if (!p_name4.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;
    if (!p_name5.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;
    if (!p_name6.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;
    if (!p_name7.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;
    if (!p_name8.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;
    if (!p_name9.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;
    if (!p_name0.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;

    pnames[0] = &p_name1;
    pnames[1] = &p_name2;
    pnames[2] = &p_name3;
    pnames[3] = &p_name4;
    pnames[4] = &p_name5;
    pnames[5] = &p_name6;
    pnames[6] = &p_name7;
    pnames[7] = &p_name8;
    pnames[8] = &p_name9;
    pnames[9] = &p_name0;

    for(int i = 0;i<10;i++){
            //names
            QTextStream out(pnames[i]);
            out << "";
            playernames[i]->setText("");
            picks[i]->setCurrentIndex(0);
            pnames[i]->close();

            //pics
            p_pics.setFileName(path+"/icons/picks/"+QString::number(i)+".jpg");
            p_pics.remove();
            p_pics.setFileName(path+"/icons/Chicken.jpg");
            p_pics.copy(path+"/icons/picks/"+QString::number(i)+".jpg");
    }


}
void Dialog::b_save(){

    QString path = qApp->applicationDirPath();
    QFile p_name1(path+"/names/1.txt");
    QFile p_name2(path+"/names/2.txt");
    QFile p_name3(path+"/names/3.txt");
    QFile p_name4(path+"/names/4.txt");
    QFile p_name5(path+"/names/5.txt");
    QFile p_name6(path+"/names/6.txt");
    QFile p_name7(path+"/names/7.txt");
    QFile p_name8(path+"/names/8.txt");
    QFile p_name9(path+"/names/9.txt");
    QFile p_name0(path+"/names/10.txt");

    QFile p_pics;



    if (!p_name1.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;
    if (!p_name2.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;
    if (!p_name3.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;
    if (!p_name4.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;
    if (!p_name5.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;
    if (!p_name6.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;
    if (!p_name7.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;
    if (!p_name8.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;
    if (!p_name9.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;
    if (!p_name0.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) return;

    pnames[0] = &p_name1;
    pnames[1] = &p_name2;
    pnames[2] = &p_name3;
    pnames[3] = &p_name4;
    pnames[4] = &p_name5;
    pnames[5] = &p_name6;
    pnames[6] = &p_name7;
    pnames[7] = &p_name8;
    pnames[8] = &p_name9;
    pnames[9] = &p_name0;

    for(int i = 0;i<10;i++){
            //names
            QTextStream out(pnames[i]);
            out << playernames[i]->text();
            pnames[i]->close();

            //pics
            p_pics.setFileName(path+"/icons/picks/"+QString::number(i)+".jpg");
            p_pics.remove();

            p_pics.setFileName(path+"/icons/"+picks[i]->currentText()+".jpg");
            p_pics.copy(path+"/icons/picks/"+QString::number(i)+".jpg");

    }



}
void Dialog::createHorizontalGroupBox()
{

    horizontalGroupBox = new QGroupBox();
    QHBoxLayout *layout = new QHBoxLayout;

    buttons[0] = new QPushButton("&Clear",this);
    connect(buttons[0], SIGNAL (clicked()), this, SLOT (b_reset()));


    buttons[1] = new QPushButton("&Save");
    connect(buttons[1], SIGNAL (clicked()), this, SLOT (b_save()));

    layout->addWidget(buttons[1]);
    layout->addWidget(buttons[0]);

    heronames.push_back("---");
    heronames.push_back("AA");
    heronames.push_back("Abaddon");
    heronames.push_back("Alchemist");
    heronames.push_back("AM");
    heronames.push_back("Axe");
    heronames.push_back("Bane");
    heronames.push_back("Bat");
    heronames.push_back("Beastmaster");
    heronames.push_back("BH");
    heronames.push_back("Brewmaster");
    heronames.push_back("Bristleback");
    heronames.push_back("Brood");
    heronames.push_back("BS");    
    heronames.push_back("Centaur");
    heronames.push_back("Chen");
    heronames.push_back("CK");
    heronames.push_back("Clinkz");
    heronames.push_back("Clockwerk");
    heronames.push_back("CM");
    heronames.push_back("Dazzle");
    heronames.push_back("DK");
    heronames.push_back("Doom");
    heronames.push_back("DP");
    heronames.push_back("Drow");
    heronames.push_back("DS");
    heronames.push_back("Dusa");        heronames.push_back("Earth Spirit");
    heronames.push_back("Ember");        heronames.push_back("Enchantress");
    heronames.push_back("Enigma");        heronames.push_back("ES");
    heronames.push_back("Furion");        heronames.push_back("Gyro");
    heronames.push_back("Huskar");        heronames.push_back("Invoker");
    heronames.push_back("Jakiro");        heronames.push_back("Juggernaut");
    heronames.push_back("KotL");        heronames.push_back("Kunkka");
    heronames.push_back("LC");        heronames.push_back("LD");
    heronames.push_back("Lesh");        heronames.push_back("Lich");
    heronames.push_back("Lina");        heronames.push_back("Lion");
    heronames.push_back("Luna");        heronames.push_back("Lycan");
    heronames.push_back("Magnus");        heronames.push_back("Meepo");
    heronames.push_back("Mirana");        heronames.push_back("Morphling");
    heronames.push_back("NA");        heronames.push_back("Naga"); heronames.push_back("Naix");
    heronames.push_back("Necro");        heronames.push_back("NS");
    heronames.push_back("OD");        heronames.push_back("Ogre");
    heronames.push_back("Omniknight");        heronames.push_back("Oracle");
    heronames.push_back("PA");        heronames.push_back("Phoenix");
    heronames.push_back("Pit Lord");        heronames.push_back("PL");
    heronames.push_back("Puck");        heronames.push_back("Pudge");
    heronames.push_back("Pugna");        heronames.push_back("QoP");
    heronames.push_back("Razor");        heronames.push_back("Rhasta");
    heronames.push_back("Riki");        heronames.push_back("Rubick");
    heronames.push_back("Sand King");        heronames.push_back("SB");
    heronames.push_back("SD");        heronames.push_back("SF");
    heronames.push_back("Shredder");        heronames.push_back("Silencer");
    heronames.push_back("SK");        heronames.push_back("Sky");
    heronames.push_back("Slardar");        heronames.push_back("Slark");
    heronames.push_back("Sniper");        heronames.push_back("Spectre");
    heronames.push_back("Storm");        heronames.push_back("Sven");
    heronames.push_back("TA");        heronames.push_back("TB");
    heronames.push_back("TC");        heronames.push_back("Techies");
    heronames.push_back("Thrall");        heronames.push_back("Tide");
    heronames.push_back("Tinker");        heronames.push_back("Tiny");
    heronames.push_back("Tree");        heronames.push_back("Troll");
    heronames.push_back("Tuskarr");        heronames.push_back("Undying");
    heronames.push_back("Ursa");        heronames.push_back("Veno");
    heronames.push_back("Viper");        heronames.push_back("Visage");
    heronames.push_back("Void");        heronames.push_back("VS");
    heronames.push_back("Warlock");        heronames.push_back("WD");
    heronames.push_back("Weaver");        heronames.push_back("Winter");
    heronames.push_back("Wisp");        heronames.push_back("WR");
    heronames.push_back("Zet");        heronames.push_back("Zeus");





    horizontalGroupBox->setLayout(layout);
}
//! [7]

//! [8]
void Dialog::createGridGroupBox()
{
    gridGroupBox = new QGroupBox();
//! [8]
    QGridLayout *layout = new QGridLayout;

//! [9]
    QPalette pal = palette();
    for (int i = 0; i < NumGridRows; ++i) {
        labels[i] = new QLabel("     ");
        labels[i]->setAutoFillBackground(true);
        if(i==0){
        pal.setColor(QPalette::Background, QColor(0x00,0x42,0xff));
        }
        if(i==1){
        pal.setColor(QPalette::Background, QColor(0x1c,0xe6,0xb9));
        }
        if(i==2){
        pal.setColor(QPalette::Background, QColor(0x54,0x00,0x81));
        }
        if(i==3){
        pal.setColor(QPalette::Background, QColor(0xff,0xfc,0x00));
        }
        if(i==4){
        pal.setColor(QPalette::Background, QColor(0xfe,0x8a,0x0e));
        }
        if(i==5){
        pal.setColor(QPalette::Background, QColor(0xe5,0x5b,0xb0));
        }
        if(i==6){
        pal.setColor(QPalette::Background, QColor(0x95,0x96,0x97));
        }
        if(i==7){
        pal.setColor(QPalette::Background, QColor(0x7e,0xbf,0xf1));
        }
        if(i==8){
        pal.setColor(QPalette::Background, QColor(0x10,0x62,0x46));
        }
        if(i==9){
        pal.setColor(QPalette::Background, QColor(0x4e,0x2a,0x04));
        }


        labels[i]->setPalette(pal);
        playernames[i] = new QLineEdit;

        if (i==4){
        layout->addWidget(new QLabel(), i + 2, 0);
        layout->addWidget(new QLabel(), i + 2, 1);
        }
        if (i>4){
        layout->addWidget(labels[i], i + 2, 0);
        layout->addWidget(playernames[i], i + 2, 1);
        }
        else{
        layout->addWidget(labels[i], i + 1, 0);
        layout->addWidget(playernames[i], i + 1, 1);
        }
    }

//! [9] //! [10]

   /* QComboBox *hero1 = new QComboBox;
    QComboBox *hero2 = new QComboBox;
    QComboBox *hero3 = new QComboBox;
    QComboBox *hero4 = new QComboBox;
    QComboBox *hero5 = new QComboBox;
    QComboBox *hero6 = new QComboBox;
    QComboBox *hero7 = new QComboBox;
    QComboBox *hero8 = new QComboBox;
    QComboBox *hero9 = new QComboBox;
    QComboBox *hero0 = new QComboBox;
*/
    for(unsigned int i = 0; i<10; i++){
        picks[i] = new QComboBox;
        for(unsigned int j = 0; j<heronames.size(); j++){
            picks[i]->insertItem(j,heronames[j]);
        }
    }

/*
        hero1->insertItem(j,heronames[j]);
        hero2->insertItem(j,heronames[j]);
        hero3->insertItem(j,heronames[j]);
        hero4->insertItem(j,heronames[j]);
        hero5->insertItem(j,heronames[j]);
        hero6->insertItem(j,heronames[j]);
        hero7->insertItem(j,heronames[j]);
        hero8->insertItem(j,heronames[j]);
        hero9->insertItem(j,heronames[j]);
        hero0->insertItem(j,heronames[j]);

    }
    hero1->setCurrentIndex(23);
*/

    layout->addWidget(picks[0], 1, 2, 1, 1);
    layout->addWidget(picks[1], 2, 2, 1, 1);
    layout->addWidget(picks[2], 3, 2, 1, 1);
    layout->addWidget(picks[3], 4, 2, 1, 1);
    layout->addWidget(picks[4], 5, 2, 1, 1);
    layout->addWidget(picks[5], 7, 2, 1, 1);
    layout->addWidget(picks[6], 8, 2, 1, 1);
    layout->addWidget(picks[7], 9, 2, 1, 1);
    layout->addWidget(picks[8], 10, 2, 1, 1);
    layout->addWidget(picks[9], 11, 2, 1, 1);
//! [10]

//! [11]
    layout->setColumnStretch(1, 45);
    layout->setColumnStretch(2, 45);
    gridGroupBox->setLayout(layout);
}
