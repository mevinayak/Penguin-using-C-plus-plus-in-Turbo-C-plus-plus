#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void wingnor(int i)
{
//wings
line(161-i,133,205-i,134);
line(205-i,134,195-i,232);
line(195-i,232,173-i,232);
line(173-i,232,161-i,133);
circle(183-i,144,5);
}
void wingmov(int i)
{
//wings
line(161-i,133,201-i,143);
line(201-i,143,145-i,233);
line(145-i,233,122-i,224);
line(122-i,224,161-i,133);
circle(173-i,149,5);
}
void wingnor2(int i)
{
//wings
line(439+i,133,395+i,134);
line(395+i,134,405+i,232);
line(405+i,232,427+i,232);
line(427+i,232,439+i,133);
circle(417+i,144,5);
}
void wingmov2(int i)
{
//wings
line(439+i,133,399+i,143);
line(399+i,143,455+i,233);
line(455+i,233,478+i,224);
line(478+i,224,439+i,133);
circle(427+i,149,5);
}

void leg1fwd(int i)
{
line(129-i,282,147-i,283);
line(147-i,283,138-i,349);
line(138-i,349,114-i,346);
line(114-i,346,129-i,282);
line(57-i,351,133-i,328);
line(133-i,328,140-i,342);
line(140-i,342,66-i,367);
line(66-i,367,57-i,351);
circle(137-i,290,5);
circle(127-i,338,5);
}
void leg1bkd(int i)
{
line(129-i,282,147-i,283);
line(147-i,283,162-i,342);
line(162-i,342,140-i,351);
line(140-i,351,129-i,282);

line(81-i,349,147-i,324);
line(147-i,324,156-i,338);
line(156-i,338,90-i,367);
line(90-i,367,81-i,349);
circle(137-i,290,5);
circle(146-i,335,5);
}
void leg2fwd(int i)
{
line(185-i,294,206-i,290);
line(206-i,290,221-i,354);
line(221-i,354,199-i,363);
line(199-i,363,185-i,294);
line(141-i,364,218-i,341);
line(218-i,341,222-i,355);
line(222-i,355,150-i,378);
line(150-i,378,141-i,364);
circle(198-i,299,5);
circle(209-i,351,5);
}
void leg2bkd(int i)
{
line(185-i,293,209-i,285);
line(209-i,285,237-i,342);
line(237-i,342,219-i,354);
line(219-i,354,185-i,293);
line(172-i,366,230-i,329);
line(230-i,329,237-i,355);
line(237-i,355,183-i,380);
line(183-i,380,172-i,366);
circle(198-i,299,5);
circle(225-i,338,5);
}
//leg reflection
void leg1fwd2(int i)
{
line(471+i,282,453+i,283);
line(453+i,283,462+i,349);
line(462+i,349,486+i,346);
line(486+i,346,471+i,282);
line(543+i,351,467+i,328);
line(467+i,328,460+i,342);
line(460+i,342,534+i,367);
line(534+i,367,543+i,351);
circle(463+i,290,5);
circle(473+i,338,5);
}
void leg1bkd2(int i)
{
line(471+i,282,453+i,283);
line(453+i,283,438+i,342);
line(438+i,342,460+i,351);
line(460+i,351,471+i,282);

line(519+i,349,453+i,324);
line(453+i,324,444+i,338);
line(444+i,338,510+i,367);
line(510+i,367,519+i,349);
circle(463+i,290,5);
circle(456+i,338,5);
}
void leg2fwd2(int i)
{
line(415+i,294,394+i,290);
line(394+i,290,379+i,354);
line(379+i,354,401+i,363);
line(401+i,363,415+i,294);
line(459+i,364,382+i,341);
line(382+i,341,378+i,355);
line(378+i,355,450+i,378);
line(450+i,378,459+i,364);
circle(402+i,299,5);
circle(391+i,351,5);
}
void leg2bkd2(int i)
{
line(415+i,293,391+i,285);
line(391+i,285,363+i,342);
line(363+i,342,381+i,354);
line(381+i,354,415+i,293);
line(428+i,366,370+i,329);
line(370+i,329,363+i,355);
line(363+i,355,417+i,380);
line(417+i,380,428+i,366);
circle(402+i,299,5);
circle(375+i,338,5);
}

void main()
{
int gd=DETECT, gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI") ;
float sx=0.4, sy=0.6;
line(300,0,300,600);
line(0,400,600,400);
for(int i=0;i<280;i++)
{
for(int j=5;j>=0;j--)
{
line(157-i,25,136-i,40);
line(136-i,40,130-i,92);
line(130-i,92,205-i,88);
line(205-i,88,191-i,36);
line(191-i,36,157-i,25);
circle(150-i,45,5);
circle(147-i,47,2);
//mouth
line(137-i,49,85-i,62);
line(85-i,62,85-i,70);
line(85-i,70,136-i,67);
line(136-i,67,137-i,49);
line(141-i,74,198-i,73);
line(198-i,73,255-i,280);
line(255-i,280,197-i,331);
line(197-i,331,150-i,329);
line(150-i,329,93-i,269);
line(93-i,269,141-i,74);
circle(173-i,81,5);
line(84-i,73-j,136-i,72-j);
line(136-i,72-j,136-i,78-j);
line(136-i,78-j,84-i,78-j);
line(84-i,78-j,84-i,73-j);
if(i%4==0)
leg1fwd(i);
else
leg1bkd(i);
if(i%4==0)
leg2fwd(i);
else
leg2bkd(i);

//X
line(443+i,25,464+i,40);
line(464+i,40,470+i,92);
line(470+i,92,395+i,88);
line(395+i,88,409+i,36);
line(409+i,36,443+i,25);
circle(450+i,45,5);
circle(453+i,47,2);
//mouth
line(463+i,49,515+i,62);
line(515+i,62,515+i,70);
line(515+i,70,464+i,67);
line(464+i,67,463+i,49);
line(459+i,74,402+i,73);
line(402+i,73,345+i,280);
line(345+i,280,403+i,331);
line(403+i,331,450+i,329);
line(450+i,329,507+i,269);
line(507+i,269,459+i,74);
circle(427+i,81,5);
//mouth
line(516+i,73-j,464+i,72-j);
line(464+i,72-j,464+i,78-j);
line(464+i,78-j,516+i,78-j);
line(516+i,78-j,516+i,73-j);
if(i%4==0)
leg1fwd2(i);
else
leg1bkd2(i);
if(i%4==0)
leg2fwd2(i);
else
leg2bkd2(i);
if(i%4==0)
wingnor(i);
else
wingmov(i);

if(i%4==0)
wingnor2(i);
else
wingmov2(i);
//Y Reflection and Scaling
line(757*sx,775*sy,736*sx,760*sy);
line(736*sx,760*sy,730*sx,708*sy);
line(730*sx,708*sy,805*sx,712*sy);
line(805*sx,712*sy,791*sx,764*sy);
line(791*sx,764*sy,757*sx,775*sy);
circle(750*sx,755*sy,5*sx);
circle(747*sx,753*sy,2*sx);
//mouth
line(737*sx,751*sy,685*sx,738*sy);
line(685*sx,738*sy,685*sx,730*sy);
line(685*sx,730*sy,736*sx,733*sy);
line(736*sx,733*sy,737*sx,751*sy);
line(741*sx,726*sy,798*sx,727*sy);
line(798*sx,727*sy,855*sx,520*sy);
line(855*sx,520*sy,797*sx,469*sy);
line(797*sx,469*sy,750*sx,471*sy);
line(750*sx,471*sy,693*sx,531*sy);
line(693*sx,531*sy,741*sx,726*sy);
circle(773*sx,719*sy,5*sx);
line(684*sx,727*sy,736*sx,728*sy);
line(736*sx,728*sy,736*sx,722*sy);
line(736*sx,722*sy,684*sx,722*sy);
line(684*sx,722*sy,684*sx,727*sy);
//wingsnormal
line(761*sx,667*sy,805*sx,666*sy);
line(805*sx,666*sy,795*sx,568*sy);
line(795*sx,568*sy,773*sx,568*sy);
line(773*sx,568*sy,761*sx,667*sy);
circle(783*sx,656*sy,5*sx);
//legsnormal
line(729*sx,518*sy,747*sx,517*sy);
line(747*sx,517*sy,738*sx,451*sy);
line(738*sx,451*sy,714*sx,454*sy);
line(714*sx,454*sy,729*sx,518*sy);
line(657*sx,449*sy,733*sx,472*sy);
line(733*sx,472*sy,740*sx,458*sy);
line(740*sx,458*sy,666*sx,433*sy);
line(666*sx,433*sy,657*sx,449*sy);
circle(737*sx,510*sy,5*sx);
circle(727*sx,462*sy,5*sx);
line(785*sx,506*sy,806*sx,510*sy);
line(806*sx,510*sy,821*sx,446*sy);
line(821*sx,446*sy,799*sx,437*sy);
line(799*sx,437*sy,785*sx,506*sy);
line(741*sx,436*sy,818*sx,459*sy);
line(818*sx,459*sy,822*sx,445*sy);
line(822*sx,445*sy,750*sx,422*sy);
line(750*sx,422*sy,741*sx,436*sy);
circle(798*sx,501*sy,5*sx);
circle(809*sx,449*sy,5*sx);
delay(30);
cleardevice();
}
}
getch();
closegraph();
}
