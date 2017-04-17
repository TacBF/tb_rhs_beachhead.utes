#include "tb_defines.hpp"

zoneList[] =
{
//ID TEAM          SPAWNTYPE      LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0         ,    {}           , {}    , 1      , {}          , 0      },
// You must not link first flags to attacking side's XRAY base for A&D, otherwise game ends after first flag.

{ 1, TEAM_BLUE    , SPAWN_XRAY,     	{3,4,5}  , {}    	, 1      , {}        		, 0    , "USMC Main Base" },
{ 2, TEAM_RED     , SPAWN_XRAY,     	{}       , {}    	, 1      , {}        		, 0    , "RU Main Base" },
{ 3, TEAM_RED     , SPAWN_NEVER,    	{6}      , {4,5} 	, 1      , {}              	, 0    , "West beach" },
{ 4, TEAM_RED     , SPAWN_NEVER,    	{6}      , {3,5} 	, 1      , {}              	, 0    , "East beach" },
{ 5, TEAM_RED     , SPAWN_NEVER,    	{6}      , {3,4} 	, 1      , {}              	, 0    , "Strelka" },
{ 6, TEAM_RED     , SPAWN_NEVER,    	{7}      , {}    	, 1      , {}              	, 0    , "Barracks" },
{ 7, TEAM_RED     , SPAWN_NEVER,    	{8}      , {}    	, 1      , {}              	, 0    , "Airport South" },
{ 8, TEAM_RED     , SPAWN_NEVER,    	{2}      , {}    	, 1      , {}         	   	, 0    , "Airport North" },
{ 9, TEAM_RED     , SPAWN_INSTANT,  	{}       , {}    	, 1      , {2,-3,-4}       	, 3    , "Omsk" },
{ 10, TEAM_BLUE   , SPAWN_LARGEFB,  	{}       , {}    	, 1      , {11}              , 1    , "Staging Area West" },
{ 11, TEAM_BLUE   , SPAWN_LARGEFB,  	{}       , {}    	, 1      , {10}              , 1    , "Staging Area East" }

};


