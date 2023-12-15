void saveQuantitybought(int cardindex, int menq, int womenq, int quantforMen[][30], int quantforWomen[][30])
{
    fstream file;
    file.open("SaveQuantity.txt", ios::out);

    for(int x=0; x<cardindex; x++)
    {
        for(int i=0; i<menq; i++)
        {
            file << quantforMen[cardindex][i];
            file <<",";
        }

        for(int j=0; j<womenq; j++)
        {
            file << quantforWomen[cardindex][j];
            if(j!=womenq-1)
            {
                file << ",";
            }
        }
    }

    file.close();
}


//saves data related to customer reviews
void saveCustomerReview(int cusCount, string reviews[], string customer[])
{
    fstream file;
    file.open("reviewsdetail.txt", ios::out);
    {
        for(int x=0; x<cusCount; x++)
        {
            file << customer[x];
            file << ",";
            file << reviews[x];

            if(x != cusCount-1)
            {
            file << '\n';
            }
        }
    }

    file.close();
}

// retrieve customer reviews
void retrieveCusReview(int &cusCount, string reviews[], string customer[])
{
    string record="";
    fstream file;
    file.open("reviewsdetail.txt", ios::in);
    while(!file.eof())
    {
        getline(file,record);
        customer[cusCount] = getField(record,1);
        reviews[cusCount] = getField(record,2);
        
    }
    
    file.close();
}


//if (GetAsyncKeyState(VK_END))
                //{
                //    if (!bulletActive)
                //    {
                //        bx = px;
                //        by = py + 3;
                //        bulletActive = true;
                //        bulletDir = 'd';  // for firing of hero bullet downwards
                //    }
                //}


// else if (bulletDir == 'd')
   // {
   //     if (getCharAtxy(bx, by + 3) != '#' || getCharAtxy(bx, by+2)!='#' || getCharAtxy(bx,by+1)!='#')
   //     {
   //         by += 3; // Move down
   //     }
   //     else
   //     {
   //         removefire();
   //         bulletActive = false;
   //         
   //     }
   // }