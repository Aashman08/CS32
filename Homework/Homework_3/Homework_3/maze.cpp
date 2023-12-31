//
//  maze.cpp
//  Homework_3
//
//  Created by Aashman Rastogi on 5/8/23.
//


bool pathExists(char maze[10][10], int sr, int sc, int er, int ec)
{
    if (sr == er && sc == ec)
    {
        return true;
    }
    
    maze[sr][sc] = '@';
    
    // south
    if(maze[sr - 1][sc] == '.')
        {
            if (pathExists(maze ,sr - 1 ,sc ,er ,ec))
            {
                return true;
            }
        }
    
    // east
    if(maze[sr][sc + 1] == '.')
        {
            if (pathExists(maze ,sr ,sc + 1,er ,ec))
            {
                return true;
            }
        }
    
    // north
    if(maze[sr + 1][sc] == '.')
        {
            if (pathExists(maze ,sr + 1 ,sc ,er ,ec))
            {
                return true;
            }
        }
    
    // west
    if(maze[sr][sc - 1] == '.')
        {
            if (pathExists(maze ,sr ,sc - 1,er ,ec))
            {
                return true;
            }
        }
    
    return false;
}

