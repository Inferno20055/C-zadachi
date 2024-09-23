#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
    /*
    //текстовая новела
    int  i, a,b,c;
    string name;
    i = 0;
    //Приветствую путник это новела расказывает об
    //рыцаре королевства Лореон ты как рыцарь
    //вызвался убить злого дракона тераризирующего ваше королевство
    //ты как великий воин был выбран убицей дракона и ди же и убей его
    //введите ваше имя персонажа
    cout << "Enter the name of the main character.";
    cin >> name;
    cout << "You are a knight of the kingdom of Loreon sir " << name<<"\n";
    cout << "You have been chosen as the warrior who will kill the dragon\n";
    //вы отправляетесь в путешествие за убийством дракона Фериона
    cout << "you leave the castle and there are two roads in front of your eyes:\n ";
    cout << "one leads to a village where you can take good weapons(1).\n And the second one goes to the cave to the dragon Ferion (2).\n";
    cin >> a;
    if (a==1)
    {
        cout << "You chose to go to the village to better prepare for the battle with Ferion.\n";
        //Вы решили пойти в деревню
        i +=1;
        
    }
    if(a==2)
    {
        cout << "You decided to go straight to Ferion's cave and because of the poor equipment you died the game is over\n (try to choose another option.)\n";
        return 0;
        //вы погибли из-за неподготовки 
    }
    //Когда вы вошли в деревню вы видите как на её напали орки
    cout << "You have decided to choose the path to the village,\n when you come to the village you see how it is being attacked by orcs.\n";
    //выбор что вы будете делать
    cout << "What will you do?\n";
    cout << "Help the defenders defeat the Orcs(1) or help the peasants evacuate the battlefield(2).\n";
    cin >> b;
    if (b==1)
    {
        cout << "You decided to help the guards, thanks to this, the orcs were quickly expelled, but many peasants died. The guards thanked you.\n";
        //вы решили помочь стражникам,вы смогли легко убить всех орков стражники поблагодарили вас,(но вы не получили оружия).
        i += 1;
    }
    if(b==2)
    {
        cout << "You saved the peasants for this they are grateful to you and for this they give you a sword made\n by the best blacksmith in the village\n"; 
        //вы решили спасти крестьян за это они вам выдали меч сделанный легендарным кузницом
        i += 2;
    }
    cout << "After you received the sword, you decided to continue on your way.\n";
    //вы взяли меч и продолжили путешествие
    cout << "On the way to the mountain, you saw a carriage surrounded by bandits.\n";
    //идя по дороге вы встретели бандитов грабящих торговцаж
    cout << "What are you going to do\n";
    //что вы юудете делать?
    cout << "Save the merchants(1), pass by(2)\n";
    //вариант 1 спасти торговца, вариант 2 пройти мимо
    cin >> c;
    if (c==1)
    {
        cout << "You decided to save the merchants by killing the bandits.\n You got a good armor from the merchant that can protect you from fire.\n";
        //вы выбрали спасти торговца вы убили бандитов и торговец вам дал броню защищающую от огня
        i += 1;
    }
    if(c==2)
    {
        cout << "You decided not to interfere in the affairs of bandits and decided to pass by.\n";
        //вы позволили бандитам убить торговца
    }
    cout << "After walking a few more kilometers, you finally came to the cave of the dragon Ferion.\n";
    //пройдя несколько километров, вы наконецто видите пещеру дракона Фериона
    cout << "You enter the dragon cave and see a huge silhouette of a dragon and start a fight with it.\n";
    if (i>=3)
    {
        cout << "The battle took more than five hours, but thanks to good weapons and armor,\n you managed to defeat the dragon and return to the castle. The end is a good ending.\n";
        //бой длился 5 часов благодоря хорошей броне и оружию благодоря этому вы победили дракона и вернулись назад в королевство.
        cout << "Your mercy for the plot:" << i;
        //ваш результат 
    }
    else
    {
        cout << "Due to the poor equipment, it is much more difficult for you to fight the dragon Ferion,\n";
        cout << "at the moment of your claw attack your armor broke and you began to bleed,\n";
        cout << " but you were able to kill the dragon with your last blow,\n";
        cout << "although you fell, but you became a legend in the kingdom of Lorion.\n";
        //плохая концовка хоть вы и убили дракона, но вы погибли сами из-за кровотичения королевство защищенно но вы погибли.
        cout << "Your mercy for the plot:" << i;
    }
    return 0;*/
    double x0, y0, r1, r2, l, x, y;
    cout << "Введите центр окружности:";
    cin >> x0 >> y0;
    cout << "Введите радиус кольца:";
    cin >> r1 >> r2;
    cout << "Введите кординаты точки:";
    cin >> x >> y;
    l = sqrt(pow(x - x0, 2) + pow(y - y0, 2));
    if (l>=r1&&l<=r2)
    {
        cout << "Даная точка принадлежит кольцу:";
    }
    else
    {
        cout << "Данная точка не принадлежит кольцу:";
    }
    return 0;
}
