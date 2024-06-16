//Create a program for a library that allows users to search for books based on different criteria such as author , title , genre and publication year using a switch statement.
#include<stdio.h>

int library(){
    int val,subval1,n;
 //List of book:
    printf("\nThis is our Library List\n 1.Press 1 for Love story \n 2.Press 2 for Fiction \n 3.Press 3 for Adventure \n 4.Press 4 for Biography \n 5.Press 5 for Ditactive \n 6.Press 6 for Children's literature \n");
    printf("Please  your choice : ");
    scanf("%d", &val);
    switch (val)
    {
        case 1://Love story book:
            printf("\nPlease choose your language\n 1. English\n 2. Hindi\n 3. Bengali");
            printf("\nWhich of the above language do you want,please press the number : ");

            scanf("%d", &n);

            printf("\n----------------------------------------------------------------------\n");
            switch(n)
            {
                case 1://English
                    printf("Name of book : With Love, from Cold World by Alicia Thompson (2023)\n");
                    printf("Name of author : Alicia Thompson\n");
                    printf("Summery : From the author of the hit Love in the Time of Serial Killers comes the perfect workplace romance for fans of a certain mouse-centric theme park. Lauren is a serious bookkeeper at a theme park where it's always winter, which doesn't get quite the crowds as its more famous counterparts. Asa is her fun-loving coworker who's always trying to spice things up around the office. Of course, their boss asks them to team up on a project. And naturally, sparks fly. Read to find out the rest.\n");
                    printf("Rating is : 4/5\n");
                    printf("\n\n");
                    printf("Name of book : Get a Life, Chloe Brown by Talia Hibbert (2019)\n");
                    printf("Name of author : Novel by Talia Hibbert\n");
                    printf("Summery : After a health scare, Chloe Brown makes a list of things to do to help her 'get a life,' including doing something bad. Naughty doesn't come naturally to good-girl Chloe, so she enlists the help of rough-and-tumble handyman Red. But what she finds is more than meets the eye, in this first in an absolutely devour-able series.\n");
                    printf("Rating is : 3.8/5\n");
                    break;
                case 2://Hindi
                    printf("Name of book : GUNAHO KA DEVTA\n");
                    printf("Name of author : Dharamvir Bharati\n");
                    printf("Summery : Gunahon Ka Devta (Author: Dharmveer Bharti) is a love story set in mid 20th century Allahabad, and explores the outcomes of constraint love. While individuals can convince themselves that love is the ultimate relationship and hence everything can be put at stake for it, but what if that cannot be the case?\n");
                    printf("Rating is : 4.3/5\n");
                    printf("\n\n");
                    printf("Name of book : Devdas\n");
                    printf("Name of author : Sarat Chandra Chattopadhyay\n");
                    printf("Summery : A tragic love story, the plot revolves around Devdas, a loser and failure in life, Paro, his forbidden childhood love; and Chandramukhi, a reformed courtesan\n");
                    printf("Rating is : 4.4/5\n");
                    break;
                case 3://Bengali
                    printf("Name of book : Parineeta\n");
                    printf("Name of author : Sarat Chandra Chattopadhyay\n");
                    printf("Summery : Parineeta takes place at the turn of the 20th century during the Bengal Renaissance. The story centers around a poor 13-year-old orphan girl, Lalita, who lives with the family of her uncle Gurucharan. Gurucharan has five daughters, and the expense of paying for their weddings has impoverished him.\n");
                    printf("Rating is : 3.9/5\n");
                    printf("\n\n");
                    printf("Name of book : Antara\n");
                    printf("Name of author : Sheikh Abdul Hakim\n");
                    printf("Summery : Meet Antara, a lovely girl born out of acceptable soceital standards and learning to adapt into the new home she finds herself. Antara suffers Autism and was once thought to be strange and complicated. Will the love of the Verma family finally make a difference in her life?\n");
                    printf("Rating is : 3.7/5\n");
                    break;

            default:
                printf("Please check your language.\n");
                break;

            }
            break;
            case 2://Fiction:
            printf("\nPlease choose your language\n 1. English\n 2. Hindi\n 3. Bengali");
            printf("\nWhich of the above language do you want,please press the number : ");
            scanf("%d", &n);

            switch(n)
            {
                case 1://English
                    printf("Name of book : Robinson Crusoe\n");
                    printf("Name of author : Daniel Defoe\n");
                    printf("Summery : Robinson Crusoe, as a young and impulsive wanderer, defied his parents and went to sea. He was involved in a series of violent storms at sea and was warned by the captain that he should not be a seafaring man. Ashamed to go home, Crusoe boarded another ship and returned from a successful trip to Africa.\n");
                    printf("Rating is : 4.4/5\n");
                    printf("\n\n");
                    printf("Name of book : Tom Jones\n");
                    printf("Name of author : Henry Fielding\n");
                    printf("Summery : Tom Jones, like its predecessor, Joseph Andrews, is constructed around a romance plot. Squire Allworthy suspects that the infant whom he adopts and names Tom Jones is the illegitimate child of his servant Jenny Jones. When Tom is a young man, he falls in love with Sophia Western, his beautiful and virtuous neighbour.\n");
                    printf("Rating is : 3.8/5\n");
                    break;
                case 2://Hindi
                    printf("Name of book : Godan\n");
                    printf("Name of author : Premchand\n");
                    printf("Summery : Premchand's 'Godan' is a social commentary on pre-independent India and highlights the issues of caste hierarchy, poverty, and exploitation of farmers. It delves into the harsh realities of rural Indian life and depicts the struggles faced by the poor.\n");
                    printf("Rating is : 4.4/5\n");
                    printf("\n\n");
                    printf("Name of book : Chitralekha\n");
                    printf("Name of author : Bhagwati Charan Verma\n");
                    printf("Summery : This novel is a love story about a young general, Bijgupta, who leads a luxurious life while serving under the Mauryan Empire and King Chandragupta Maurya (340 BCE – 298 BCE) and the beautiful dancer and young widow, Chitralekha.\n ");
                    printf("Rating is : 4.3/5\n");
                    break;
                case 3://Bengali
                    printf("Name of book : Gora\n");
                    printf("Name of author : Rabindranath Tagore\n");
                    printf("Summery : It explores the clash between traditional Hindu customs and modern ideas, reflecting the complexities of India during the colonial era. The protagonist, Gora, grapples with questions of identity and cultural belonging, making the novel a profound exploration of self-discovery and societal transformation.\n");
                    printf("Rating is : 4.4/5\n");
                    printf("\n\n");
                    printf("Name of book : Kapalkundala\n");
                    printf("Name of author : Bankim Chandra Chattopadhyay\n");
                    printf("Summery : Synopsis. Nabakumar, a young gentleman from Saptagram, got lost in a forest while returning from pilgrimage in Gangasagar. He met a Tantric sage who trapped him, intending to make him a sacrifice to goddess Shamshaan Kali; but was later freed secretly by Kapalkundala, the sage's foster-daughter\n");
                    printf("Rating is : 5/5\n");
                    break;

            default:
                printf("Please check your language or .\n");
                break;


            }
            break;
            case 3://Adventure:
            printf("\nPlease choose your language\n 1. English\n 2. Hindi\n 3. Bengali");
            printf("\nWhich of the above language do you want,please press the number : ");
            scanf("%d", &n);

            switch(n)
            {
                case 1://English
                    printf("Name of book : Treasure island\n");
                    printf("Name of author : Robert Louis Stevenson\n");
                    printf("Summery : The book tells the story of an impulsive and adventurous young boy named Jim Hawkins who comes across a treasure map. He goes on a journey to try and recover the treasure, which once belonged to the famous Captain Flint. On his journey, he meets Long John Silver, a one-legged cook who ends up leading a pirate mutiny.\n");
                    printf("Rating is : 4.1/5\n");
                    printf("\n\n");
                    printf("Name of book : Adventures of Huckleberry Finn\n");
                    printf("Name of author :  Mark Twain\n");
                    printf("Summery : The novel tells the story of Huckleberry Finn's escape from his alcoholic and abusive father and Huck's adventurous journey down the Mississippi River together with the runaway slave Jim\n");
                    printf("Rating is : 3.8/5\n");
                    break;
                case 2://Hindi
                    printf("Name of book : Malgudi Days\n");
                    printf("Name of author : R.K. Narayan\n");
                    printf("Summery :  Malgudi Days explores the lives of those who reside in the fictional town of Malgudi.\n");
                    printf("Rating is : 4.5/5\n");
                    printf("\n\n");
                    printf("Name of book : The Palace of Illusions\n");
                    printf("Name of author : Chitra Banerjee Divakaruni\n");
                    printf("Summery : The novel traces Panchaali's life, beginning with her magical birth in fire as the daughter of a king before following her spirited balancing act as a woman with five husbands who have been cheated out of their father's kingdom.\n");
                    printf("Rating is : 4.2/5\n");
                    break;
                case 3://Bengali
                    printf("Name of book : Anandamath\n");
                    printf("Name of author : Bankim Chandra Chatterjee\n");
                    printf("Summery : The book is set in the years during the famine in Bengal in 1770 CE. It starts with introduction to a couple, Mahendra and Kalyani, who are stuck in their village Padachinha without food and water in a time of famine\n");
                    printf("Rating is : 4.3/5\n");
                    printf("\n\n");
                    printf("Name of book : The Boatman Of The Padma\n");
                    printf("Name of author : Manik Bandopadhya\n");
                    printf("Summery : The novel reflects the life of Kuber, who is a poor boatman struggling to feed his family.\n");
                    printf("Rating is : 4.1/5\n");
                    break;

            default:
                printf("Please check your language or .\n");
                break;


            }
            break;
            case 4://Biography:
            printf("\nPlease choose your language\n 1. English\n 2. Hindi\n 3. Bengali");
            printf("\nWhich of the above language do you want,please press the number : ");
            scanf("%d", &n);

            switch(n)
            {
                case 1://English
                    printf("Name of book : Alexander Hamilton\n");
                    printf("Name of author : Alexander Hamilton\n");
                    printf("Summery : Alexander Hamilton was a founding father of the United States, who fought in the American Revolutionary War, helped draft the Constitution, and served as the first secretary of the treasury.\n");
                    printf("Rating is : 4.2/5\n");
                    printf("\n\n");
                    printf("Name of book : Steve Jobs\n");
                    printf("Name of author : Walter Isaacson\n");
                    printf("Summery : Steve Jobs was born in 1955 and raised by adoptive parents in Cupertino, California. Though he was interested in engineering, his passions as a youth varied. After dropping out of Reed College, Jobs worked as a video game designer at Atari and later went to India to experience Buddhism. In 1976 he helped launch Apple.\n");
                    printf("Rating is : 4.2/5\n");
                    break;
                case 2://Hindi
                    printf("Name of book : Wings of Fire\n");
                    printf("Name of author : Dr. A. P. J. Abdul Kalam\n");
                    printf("Summery : APJ Abdul Kalam's autobiography, Wings of Fire, covers his early life as well as his role in Indian space research and missile programmes.It tells the narrative of a young boy from a poor family who rose through the ranks of Indian space research and missile programmes to become the country's president.\n");
                    printf("Rating is : 4/5\n");
                    printf("\n\n");
                    printf("Name of book : The Story of My Experiments with Truth\n");
                    printf("Name of author : Mohandas Karamchand Gandhi\n");
                    printf("Summery : The book chronicles Gandhi's life, from his childhood in Porbandar, Gujarat, to his experiences as a lawyer in South Africa, and ultimately his role in India's struggle for independence.\n");
                    printf("Rating is : 4.3/5\n");
                    break;
                case 3://Bengali
                    printf("Name of book : Ramakrishna Kathamrita\n");
                    printf("Name of author : Mahendranath Gupta\n");
                    printf("Summery : The Kathamrita contains the conversations of Ramakrishna from 19/26 February 1882 to 24 April 1886, during M's visits. M—even with his partial reporting—offers information about a great variety of people with very different interests converging at Dakshineswar Kali temple including\n");
                    printf("Rating is : 4.4/5\n");
                    printf("\n\n");
                    printf("Name of book : Chaitanya Charitamrita\n");
                    printf("Name of author : Krishnadasa Kaviraja\n");
                    printf("Summery : Chaitanya-Charitamrita is considered the most accurate, authentic, and philosophical biography of Shri Chaitanya.\n");
                    printf("Rating is : 4.7/5\n");
                    break;

            default:
                printf("Please check your language or .\n");
                break;


            }
            break;
            case 5://Ditective:
            printf("\nPlease choose your language\n 1. English\n 2. Hindi\n 3. Bengali");
            printf("\nWhich of the above language do you want,please press the number : ");
            scanf("%d", &n);

            switch(n)
            {
                case 1://English
                    printf("Name of book :  Murder on the Orient Express\n");
                    printf("Name of author :  Agatha Christie\n");
                    printf("Summery : An American tycoon lies dead in his compartment, stabbed a dozen times, his door locked from the inside. Isolated and with a killer in their midst, detective Hercule Poirot must identify the murderer – in case he or she decides to strike again.\n");
                    printf("Rating is : 3.5/5\n");
                    printf("\n\n");
                    printf("Name of book : The Hound of the Baskervilles\n");
                    printf("Name of author : Sir Arthur Conan Doyle\n");
                    printf("Summery :Plot. An old legend tells of a curse that runs in the Baskerville family since the time of the English Civil War, when Sir Hugo Baskerville was killed by a demonic hound, which has haunted the mires of Dartmoor ever since, causing the premature death of many Baskerville heirs.\n ");
                    printf("Rating is : 4.1/5\n");
                    break;
                case 2://Hindi
                    printf("Name of book : The Calcutta Chromosome \n");
                    printf("Name of author : Amitav Ghosh\n");
                    printf("Summery : The narrative is suffused with science, myth, nihilism, philosophy and superstition. The book is based on the life of the Nobel Prize winning scientist, Sir Ronald Ross, who did a breakthrough research on malaria in 1989. It is an attempt to rewrite the story of Ronald Ross's discovery of the malarial parasite.\n");
                    printf("Rating is : 4.2/5\n");
                    printf("\n\n");
                    printf("Name of book : Dead Meat\n");
                    printf("Name of author : Ankush Saikia\n");
                    printf("Summery : When her friend is bitten by a surprisingly sprightly corpse and turns into a flesh muncher, Helena flees for her life. Turns out mad cow disease turns humans into zombies. Who knew?\n");
                    printf("Rating is : 4.2/5\n");
                    break;
                case 3://Bengali
                    printf("Name of book : Feluda\n");
                    printf("Name of author :  Satyajit Ray\n");
                    printf("Summery : This book, The Adventures of Feluda: The Emperor's Ring, is a complex story about two cousins as they manage to work their way through a criminal mystery.\n");
                    printf("Rating is : 42/5\n");
                    printf("\n\n");
                    printf("Name of book : Byomkesh\n");
                    printf("Name of author : Saradindu Bandopadhyay\n");
                    printf("Summery : The stories revolve around the fictional character Byomkesh Bakshi, a detective who solves complex cases with his sharp intellect and analytical skills.\n");
                    printf("Rating is : \n");
                    break;

            default:
                printf("Please check your language or .\n");
                break;


            }
            break;
            case 6://Children's literature :
            printf("\nPlease choose your language\n 1. English\n 2. Hindi\n 3. Bengali");
            printf("\nWhich of the above language do you want,please press the number : ");
            scanf("%d", &n);

            switch(n)
            {
                case 1://English
                    printf("Name of book : The Cat in the Hat\n");
                    printf("Name of author : Dr. Seuss\n");
                    printf("Summery : When Sally and her brother are left alone on a rainy day, they think they are in for a dull time - but then the Cat in the Hat steps onto the mat, bringing with him madness and mayhem.\n");
                    printf("Rating is : 4.2/5\n");
                    printf("\n\n");
                    printf("Name of book : The Story of Ferdinand\n");
                    printf("Name of author : Robert Lawson\n");
                    printf("Summery : the children's book tells the story of a bull who would rather smell flowers than fight in bullfights. \n");
                    printf("Rating is : 4.4/5\n");
                    break;
                case 2://Hindi
                    printf("Name of book :Baingani Jojo- Purple Jojo \n");
                    printf("Name of author : Sameera Zia Qureshi\n");
                    printf("Summery : One day, Jojo the dog wakes up to find purple spots on his body. Where did they come from? Jojo sets off on a search.\n");
                    printf("Rating is : 4.4/5\n");
                    printf("\n\n");
                    printf("Name of book : Mahabharata Tales\n");
                    printf("Name of author : Deepak M R\n");
                    printf("Summery : The story of Mahabharata is about the battle between two groups of cousins named the Pandavas and the Kauravas to gain supreme power and rule the kingdom.\n");
                    printf("Rating is : 4.1/5\n");
                    break;
                case 3://Bengali
                    printf("Name of book : Nonte Phonte\n");
                    printf("Name of author : Narayan Debnath\n");
                    printf("Summery : After getting tired of their naughty antics, two boisterous kids were sent to a boarding school. They start off as enemies but very soon become friends when it comes to survival between riva...\n");
                    printf("Rating is : 4.6/5\n");
                    printf("\n\n");
                    printf("Name of book : GOPAL BHAR.\n");
                    printf("Name of author : Basanta Bhattacharya\n");
                    printf("Summery : Gopal Bhar or Gopal Bhand was a court jester in medieval Bengal.\n");
                    printf("Rating is : 4.3/5\n");
                    break;

            default:
                printf("Please check your language or .\n");
                break;


            }
            break;
    default : printf("Please check the book selection");
    }
    return 0;
}
//main function:-
int main ()
{

    char name1[100],name2[100];


    //Introduction:
    printf("www.thomaslibrary.com\n\n\n");
    printf("It is a good day.\n");
    printf("Please enter your some details.\n");
    //enter your name:
    printf("Enter your  first name : ");
    scanf("%s", &name1);
    printf("Enter your  last name : ");
    scanf("%s", &name2);


    //assistant speak:
    printf("\nHello,%s %s\n", &name1,&name2);
    printf("\nMy name is Thomas,I am your library assistant.\n");
    printf("\nWhat kind of book's do you want to sink your soul today ?\n");
    int call;
    call = library();
    printf("",library);

    int running = 1;
    while (running) {
        printf("\vAre you want any other books?\n");
        printf("Please press 1 for Continue,\n       press 2 for Exit");
        printf("\nEnter here : ");
        scanf("%d", &running);

        switch (running) {
            case 1:
                library();
                break;
            case 2:
                running = 0;
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
    printf("\nThanks for visiting our site ...\n");
    return 0;
}