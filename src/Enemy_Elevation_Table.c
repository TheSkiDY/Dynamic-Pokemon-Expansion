#include "defines.h"

const u8 gEnemyMonElevation[NUM_SPECIES] =
{
	[SPECIES_NONE] = 0x0,
	[SPECIES_BULBASAUR] = 0x0,
	[SPECIES_IVYSAUR] = 0x0,
	[SPECIES_VENUSAUR] = 0x0,
	[SPECIES_CHARMANDER] = 0x0,
	[SPECIES_CHARMELEON] = 0x0,
	[SPECIES_CHARIZARD] = 0x0,
	[SPECIES_SQUIRTLE] = 0x0,
	[SPECIES_WARTORTLE] = 0x0,
	[SPECIES_BLASTOISE] = 0x0,
	[SPECIES_CATERPIE] = 0x0,
	[SPECIES_METAPOD] = 0x0,
	[SPECIES_BUTTERFREE] = 0x11,
	[SPECIES_WEEDLE] = 0x0,
	[SPECIES_KAKUNA] = 0x0,
	[SPECIES_BEEDRILL] = 0x8,
	[SPECIES_PIDGEY] = 0x0,
	[SPECIES_PIDGEOTTO] = 0x0,
	[SPECIES_PIDGEOT] = 0xa,
	[SPECIES_RATTATA] = 0x0,
	[SPECIES_RATICATE] = 0x0,
	[SPECIES_SPEAROW] = 0x0,
	[SPECIES_FEAROW] = 0x6,
	[SPECIES_EKANS] = 0x0,
	[SPECIES_ARBOK] = 0x0,
	[SPECIES_PIKACHU] = 0x0,
	[SPECIES_RAICHU] = 0x0,
	[SPECIES_SANDSHREW] = 0x0,
	[SPECIES_SANDSLASH] = 0x0,
	[SPECIES_NIDORAN_F] = 0x0,
	[SPECIES_NIDORINA] = 0x0,
	[SPECIES_NIDOQUEEN] = 0x0,
	[SPECIES_NIDORAN_M] = 0x0,
	[SPECIES_NIDORINO] = 0x0,
	[SPECIES_NIDOKING] = 0x0,
	[SPECIES_CLEFAIRY] = 0x0,
	[SPECIES_CLEFABLE] = 0x0,
	[SPECIES_VULPIX] = 0x0,
	[SPECIES_NINETALES] = 0x0,
	[SPECIES_JIGGLYPUFF] = 0x0,
	[SPECIES_WIGGLYTUFF] = 0x0,
	[SPECIES_ZUBAT] = 0xe,
	[SPECIES_GOLBAT] = 0xe,
	[SPECIES_ODDISH] = 0x0,
	[SPECIES_GLOOM] = 0x0,
	[SPECIES_VILEPLUME] = 0x0,
	[SPECIES_PARAS] = 0x0,
	[SPECIES_PARASECT] = 0x0,
	[SPECIES_VENONAT] = 0x0,
	[SPECIES_VENOMOTH] = 0xa,
	[SPECIES_DIGLETT] = 0x0,
	[SPECIES_DUGTRIO] = 0x0,
	[SPECIES_MEOWTH] = 0x0,
	[SPECIES_PERSIAN] = 0x0,
	[SPECIES_PSYDUCK] = 0x0,
	[SPECIES_GOLDUCK] = 0x0,
	[SPECIES_MANKEY] = 0x0,
	[SPECIES_PRIMEAPE] = 0x0,
	[SPECIES_GROWLITHE] = 0x0,
	[SPECIES_ARCANINE] = 0x0,
	[SPECIES_POLIWAG] = 0x0,
	[SPECIES_POLIWHIRL] = 0x0,
	[SPECIES_POLIWRATH] = 0x0,
	[SPECIES_ABRA] = 0x0,
	[SPECIES_KADABRA] = 0x0,
	[SPECIES_ALAKAZAM] = 0x0,
	[SPECIES_MACHOP] = 0x0,
	[SPECIES_MACHOKE] = 0x0,
	[SPECIES_MACHAMP] = 0x0,
	[SPECIES_BELLSPROUT] = 0x0,
	[SPECIES_WEEPINBELL] = 0x0,
	[SPECIES_VICTREEBEL] = 0x0,
	[SPECIES_TENTACOOL] = 0x0,
	[SPECIES_TENTACRUEL] = 0x0,
	[SPECIES_GEODUDE] = 0x0,
	[SPECIES_GRAVELER] = 0x0,
	[SPECIES_GOLEM] = 0x0,
	[SPECIES_PONYTA] = 0x0,
	[SPECIES_RAPIDASH] = 0x0,
	[SPECIES_SLOWPOKE] = 0x0,
	[SPECIES_SLOWBRO] = 0x0,
	[SPECIES_MAGNEMITE] = 0x10,
	[SPECIES_MAGNETON] = 0xa,
	[SPECIES_FARFETCHD] = 0x0,
	[SPECIES_DODUO] = 0x0,
	[SPECIES_DODRIO] = 0x0,
	[SPECIES_SEEL] = 0x0,
	[SPECIES_DEWGONG] = 0x0,
	[SPECIES_GRIMER] = 0x0,
	[SPECIES_MUK] = 0x0,
	[SPECIES_SHELLDER] = 0x0,
	[SPECIES_CLOYSTER] = 0x0,
	[SPECIES_GASTLY] = 0xe,
	[SPECIES_HAUNTER] = 0xe,
	[SPECIES_GENGAR] = 0x0,
	[SPECIES_ONIX] = 0x0,
	[SPECIES_DROWZEE] = 0x0,
	[SPECIES_HYPNO] = 0x0,
	[SPECIES_KRABBY] = 0x0,
	[SPECIES_KINGLER] = 0x0,
	[SPECIES_VOLTORB] = 0x0,
	[SPECIES_ELECTRODE] = 0x0,
	[SPECIES_EXEGGCUTE] = 0x0,
	[SPECIES_EXEGGUTOR] = 0x0,
	[SPECIES_CUBONE] = 0x0,
	[SPECIES_MAROWAK] = 0x0,
	[SPECIES_HITMONLEE] = 0x0,
	[SPECIES_HITMONCHAN] = 0x0,
	[SPECIES_LICKITUNG] = 0x0,
	[SPECIES_KOFFING] = 0xe,
	[SPECIES_WEEZING] = 0x6,
	[SPECIES_RHYHORN] = 0x0,
	[SPECIES_RHYDON] = 0x0,
	[SPECIES_CHANSEY] = 0x0,
	[SPECIES_TANGELA] = 0x0,
	[SPECIES_KANGASKHAN] = 0x0,
	[SPECIES_HORSEA] = 0x0,
	[SPECIES_SEADRA] = 0x0,
	[SPECIES_GOLDEEN] = 0x0,
	[SPECIES_SEAKING] = 0x0,
	[SPECIES_STARYU] = 0x0,
	[SPECIES_STARMIE] = 0x0,
	[SPECIES_MR_MIME] = 0x0,
	[SPECIES_SCYTHER] = 0x0,
	[SPECIES_JYNX] = 0x0,
	[SPECIES_ELECTABUZZ] = 0x0,
	[SPECIES_MAGMAR] = 0x0,
	[SPECIES_PINSIR] = 0x0,
	[SPECIES_TAUROS] = 0x0,
	[SPECIES_MAGIKARP] = 0x0,
	[SPECIES_GYARADOS] = 0x5,
	[SPECIES_LAPRAS] = 0x0,
	[SPECIES_DITTO] = 0x0,
	[SPECIES_EEVEE] = 0x0,
	[SPECIES_VAPOREON] = 0x0,
	[SPECIES_JOLTEON] = 0x0,
	[SPECIES_FLAREON] = 0x0,
	[SPECIES_PORYGON] = 0x0,
	[SPECIES_OMANYTE] = 0x0,
	[SPECIES_OMASTAR] = 0x0,
	[SPECIES_KABUTO] = 0x0,
	[SPECIES_KABUTOPS] = 0x0,
	[SPECIES_AERODACTYL] = 0xa,
	[SPECIES_SNORLAX] = 0x0,
	[SPECIES_ARTICUNO] = 0x0,
	[SPECIES_ZAPDOS] = 0x8,
	[SPECIES_MOLTRES] = 0x0,
	[SPECIES_DRATINI] = 0x0,
	[SPECIES_DRAGONAIR] = 0x0,
	[SPECIES_DRAGONITE] = 0x0,
	[SPECIES_MEWTWO] = 0x0,
	[SPECIES_MEW] = 0xe,
	[SPECIES_CHIKORITA] = 0x0,
	[SPECIES_BAYLEEF] = 0x0,
	[SPECIES_MEGANIUM] = 0x0,
	[SPECIES_CYNDAQUIL] = 0x0,
	[SPECIES_QUILAVA] = 0x0,
	[SPECIES_TYPHLOSION] = 0x0,
	[SPECIES_TOTODILE] = 0x0,
	[SPECIES_CROCONAW] = 0x0,
	[SPECIES_FERALIGATR] = 0x0,
	[SPECIES_SENTRET] = 0x0,
	[SPECIES_FURRET] = 0x0,
	[SPECIES_HOOTHOOT] = 0x0,
	[SPECIES_NOCTOWL] = 0x0,
	[SPECIES_LEDYBA] = 0x0,
	[SPECIES_LEDIAN] = 0xa,
	[SPECIES_SPINARAK] = 0x0,
	[SPECIES_ARIADOS] = 0x0,
	[SPECIES_CROBAT] = 0xa,
	[SPECIES_CHINCHOU] = 0x0,
	[SPECIES_LANTURN] = 0x0,
	[SPECIES_PICHU] = 0x0,
	[SPECIES_CLEFFA] = 0x0,
	[SPECIES_IGGLYBUFF] = 0x0,
	[SPECIES_TOGEPI] = 0x0,
	[SPECIES_TOGETIC] = 0x0,
	[SPECIES_NATU] = 0x0,
	[SPECIES_XATU] = 0x0,
	[SPECIES_MAREEP] = 0x0,
	[SPECIES_FLAAFFY] = 0x0,
	[SPECIES_AMPHAROS] = 0x0,
	[SPECIES_BELLOSSOM] = 0x0,
	[SPECIES_MARILL] = 0x0,
	[SPECIES_AZUMARILL] = 0x0,
	[SPECIES_SUDOWOODO] = 0x0,
	[SPECIES_POLITOED] = 0x0,
	[SPECIES_HOPPIP] = 0xe,
	[SPECIES_SKIPLOOM] = 0xe,
	[SPECIES_JUMPLUFF] = 0xe,
	[SPECIES_AIPOM] = 0x0,
	[SPECIES_SUNKERN] = 0x0,
	[SPECIES_SUNFLORA] = 0x0,
	[SPECIES_YANMA] = 0xe,
	[SPECIES_WOOPER] = 0x0,
	[SPECIES_QUAGSIRE] = 0x0,
	[SPECIES_ESPEON] = 0x0,
	[SPECIES_UMBREON] = 0x0,
	[SPECIES_MURKROW] = 0xe,
	[SPECIES_SLOWKING] = 0x0,
	[SPECIES_MISDREAVUS] = 0xe,
	[SPECIES_UNOWN] = 0xe,
	[SPECIES_WOBBUFFET] = 0x0,
	[SPECIES_GIRAFARIG] = 0x0,
	[SPECIES_PINECO] = 0x0,
	[SPECIES_FORRETRESS] = 0x0,
	[SPECIES_DUNSPARCE] = 0x0,
	[SPECIES_GLIGAR] = 0xa,
	[SPECIES_STEELIX] = 0x0,
	[SPECIES_SNUBBULL] = 0x0,
	[SPECIES_GRANBULL] = 0x0,
	[SPECIES_QWILFISH] = 0x0,
	[SPECIES_SCIZOR] = 0x0,
	[SPECIES_SHUCKLE] = 0x0,
	[SPECIES_HERACROSS] = 0x0,
	[SPECIES_SNEASEL] = 0x0,
	[SPECIES_TEDDIURSA] = 0x0,
	[SPECIES_URSARING] = 0x0,
	[SPECIES_SLUGMA] = 0x0,
	[SPECIES_MAGCARGO] = 0x0,
	[SPECIES_SWINUB] = 0x0,
	[SPECIES_PILOSWINE] = 0x0,
	[SPECIES_CORSOLA] = 0x0,
	[SPECIES_REMORAID] = 0x0,
	[SPECIES_OCTILLERY] = 0x0,
	[SPECIES_DELIBIRD] = 0x0,
	[SPECIES_MANTINE] = 0xa,
	[SPECIES_SKARMORY] = 0x0,
	[SPECIES_HOUNDOUR] = 0x0,
	[SPECIES_HOUNDOOM] = 0x0,
	[SPECIES_KINGDRA] = 0x0,
	[SPECIES_PHANPY] = 0x0,
	[SPECIES_DONPHAN] = 0x0,
	[SPECIES_PORYGON2] = 0xe,
	[SPECIES_STANTLER] = 0x0,
	[SPECIES_SMEARGLE] = 0x0,
	[SPECIES_TYROGUE] = 0x0,
	[SPECIES_HITMONTOP] = 0x0,
	[SPECIES_SMOOCHUM] = 0x0,
	[SPECIES_ELEKID] = 0x0,
	[SPECIES_MAGBY] = 0x0,
	[SPECIES_MILTANK] = 0x0,
	[SPECIES_BLISSEY] = 0x0,
	[SPECIES_RAIKOU] = 0x0,
	[SPECIES_ENTEI] = 0x0,
	[SPECIES_SUICUNE] = 0x0,
	[SPECIES_LARVITAR] = 0x0,
	[SPECIES_PUPITAR] = 0x0,
	[SPECIES_TYRANITAR] = 0x0,
	[SPECIES_LUGIA] = 0x7,
	[SPECIES_HO_OH] = 0x7,
	[SPECIES_CELEBI] = 0xe,
	[252] = 0x0,
	[253] = 0x0,
	[254] = 0x0,
	[255] = 0x0,
	[256] = 0x0,
	[257] = 0x0,
	[258] = 0x0,
	[259] = 0x0,
	[260] = 0x0,
	[261] = 0x0,
	[262] = 0x0,
	[263] = 0x0,
	[264] = 0x0,
	[265] = 0x0,
	[266] = 0x0,
	[267] = 0x0,
	[268] = 0x0,
	[269] = 0x0,
	[270] = 0x0,
	[271] = 0x0,
	[272] = 0x0,
	[273] = 0x0,
	[274] = 0x0,
	[275] = 0x0,
	[276] = 0x0,
	[SPECIES_TREECKO] = 0x0,
	[SPECIES_GROVYLE] = 0x0,
	[SPECIES_SCEPTILE] = 0x0,
	[SPECIES_TORCHIC] = 0x0,
	[SPECIES_COMBUSKEN] = 0x0,
	[SPECIES_BLAZIKEN] = 0x0,
	[SPECIES_MUDKIP] = 0x0,
	[SPECIES_MARSHTOMP] = 0x0,
	[SPECIES_SWAMPERT] = 0x0,
	[SPECIES_POOCHYENA] = 0x0,
	[SPECIES_MIGHTYENA] = 0x0,
	[SPECIES_ZIGZAGOON] = 0x0,
	[SPECIES_LINOONE] = 0x0,
	[SPECIES_WURMPLE] = 0x0,
	[SPECIES_SILCOON] = 0x0,
	[SPECIES_BEAUTIFLY] = 0xe,
	[SPECIES_CASCOON] = 0x0,
	[SPECIES_DUSTOX] = 0xe,
	[SPECIES_LOTAD] = 0x0,
	[SPECIES_LOMBRE] = 0x0,
	[SPECIES_LUDICOLO] = 0x0,
	[SPECIES_SEEDOT] = 0x0,
	[SPECIES_NUZLEAF] = 0x0,
	[SPECIES_SHIFTRY] = 0x0,
	[SPECIES_NINCADA] = 0x0,
	[SPECIES_NINJASK] = 0xe,
	[SPECIES_SHEDINJA] = 0xe,
	[SPECIES_TAILLOW] = 0x0,
	[SPECIES_SWELLOW] = 0x7,
	[SPECIES_SHROOMISH] = 0x0,
	[SPECIES_BRELOOM] = 0x0,
	[SPECIES_SPINDA] = 0x0,
	[SPECIES_WINGULL] = 0xe,
	[SPECIES_PELIPPER] = 0x8,
	[SPECIES_SURSKIT] = 0x0,
	[SPECIES_MASQUERAIN] = 0xc,
	[SPECIES_WAILMER] = 0x0,
	[SPECIES_WAILORD] = 0x0,
	[SPECIES_SKITTY] = 0x0,
	[SPECIES_DELCATTY] = 0x0,
	[SPECIES_KECLEON] = 0x0,
	[SPECIES_BALTOY] = 0xa,
	[SPECIES_CLAYDOL] = 0xa,
	[SPECIES_NOSEPASS] = 0x0,
	[SPECIES_TORKOAL] = 0x0,
	[SPECIES_SABLEYE] = 0x0,
	[SPECIES_BARBOACH] = 0x0,
	[SPECIES_WHISCASH] = 0x0,
	[SPECIES_LUVDISC] = 0x0,
	[SPECIES_CORPHISH] = 0x0,
	[SPECIES_CRAWDAUNT] = 0x0,
	[SPECIES_FEEBAS] = 0x0,
	[SPECIES_MILOTIC] = 0x0,
	[SPECIES_CARVANHA] = 0x0,
	[SPECIES_SHARPEDO] = 0x0,
	[SPECIES_TRAPINCH] = 0x0,
	[SPECIES_VIBRAVA] = 0xa,
	[SPECIES_FLYGON] = 0x7,
	[SPECIES_MAKUHITA] = 0x0,
	[SPECIES_HARIYAMA] = 0x0,
	[SPECIES_ELECTRIKE] = 0x0,
	[SPECIES_MANECTRIC] = 0x0,
	[SPECIES_NUMEL] = 0x0,
	[SPECIES_CAMERUPT] = 0x0,
	[SPECIES_SPHEAL] = 0x0,
	[SPECIES_SEALEO] = 0x0,
	[SPECIES_WALREIN] = 0x0,
	[SPECIES_CACNEA] = 0x0,
	[SPECIES_CACTURNE] = 0x0,
	[SPECIES_SNORUNT] = 0x0,
	[SPECIES_GLALIE] = 0xc,
	[SPECIES_LUNATONE] = 0xe,
	[SPECIES_SOLROCK] = 0x5,
	[SPECIES_AZURILL] = 0x0,
	[SPECIES_SPOINK] = 0x0,
	[SPECIES_GRUMPIG] = 0x0,
	[SPECIES_PLUSLE] = 0x0,
	[SPECIES_MINUN] = 0x0,
	[SPECIES_MAWILE] = 0x0,
	[SPECIES_MEDITITE] = 0x0,
	[SPECIES_MEDICHAM] = 0x0,
	[SPECIES_SWABLU] = 0x0,
	[SPECIES_ALTARIA] = 0x0,
	[SPECIES_WYNAUT] = 0x0,
	[SPECIES_DUSKULL] = 0xe,
	[SPECIES_DUSCLOPS] = 0x0,
	[SPECIES_ROSELIA] = 0x0,
	[SPECIES_SLAKOTH] = 0x0,
	[SPECIES_VIGOROTH] = 0x0,
	[SPECIES_SLAKING] = 0x0,
	[SPECIES_GULPIN] = 0x0,
	[SPECIES_SWALOT] = 0x0,
	[SPECIES_TROPIUS] = 0x0,
	[SPECIES_WHISMUR] = 0x0,
	[SPECIES_LOUDRED] = 0x0,
	[SPECIES_EXPLOUD] = 0x0,
	[SPECIES_CLAMPERL] = 0x0,
	[SPECIES_HUNTAIL] = 0x0,
	[SPECIES_GOREBYSS] = 0x0,
	[SPECIES_ABSOL] = 0x0,
	[SPECIES_SHUPPET] = 0xe,
	[SPECIES_BANETTE] = 0x0,
	[SPECIES_SEVIPER] = 0x0,
	[SPECIES_ZANGOOSE] = 0x0,
	[SPECIES_RELICANTH] = 0x0,
	[SPECIES_ARON] = 0x0,
	[SPECIES_LAIRON] = 0x0,
	[SPECIES_AGGRON] = 0x0,
	[SPECIES_CASTFORM] = 0x10,
	[SPECIES_VOLBEAT] = 0x0,
	[SPECIES_ILLUMISE] = 0x0,
	[SPECIES_LILEEP] = 0x0,
	[SPECIES_CRADILY] = 0x0,
	[SPECIES_ANORITH] = 0x0,
	[SPECIES_ARMALDO] = 0x0,
	[SPECIES_RALTS] = 0x0,
	[SPECIES_KIRLIA] = 0x0,
	[SPECIES_GARDEVOIR] = 0x0,
	[SPECIES_BAGON] = 0x0,
	[SPECIES_SHELGON] = 0x0,
	[SPECIES_SALAMENCE] = 0x0,
	[SPECIES_BELDUM] = 0x8,
	[SPECIES_METANG] = 0x5,
	[SPECIES_METAGROSS] = 0x0,
	[SPECIES_REGIROCK] = 0x0,
	[SPECIES_REGICE] = 0x0,
	[SPECIES_REGISTEEL] = 0x0,
	[SPECIES_KYOGRE] = 0x0,
	[SPECIES_GROUDON] = 0x0,
	[SPECIES_RAYQUAZA] = 0x6,
	[SPECIES_LATIAS] = 0xa,
	[SPECIES_LATIOS] = 0x6,
	[SPECIES_JIRACHI] = 0x0,
	[SPECIES_DEOXYS] = 0x0,
	[SPECIES_CHIMECHO] = 0xe,
	[SPECIES_EGG] = 0x0,
	[SPECIES_UNOWN_B] = 0x0,
	[SPECIES_UNOWN_C] = 0x0,
	[SPECIES_UNOWN_D] = 0x0,
	[SPECIES_UNOWN_E] = 0x0,
	[SPECIES_UNOWN_F] = 0x0,
	[SPECIES_UNOWN_G] = 0x0,
	[SPECIES_UNOWN_H] = 0x0,
	[SPECIES_UNOWN_I] = 0x0,
	[SPECIES_UNOWN_J] = 0x0,
	[SPECIES_UNOWN_K] = 0x0,
	[SPECIES_UNOWN_L] = 0x0,
	[SPECIES_UNOWN_M] = 0x0,
	[SPECIES_UNOWN_N] = 0x0,
	[SPECIES_UNOWN_O] = 0x0,
	[SPECIES_UNOWN_P] = 0x0,
	[SPECIES_UNOWN_Q] = 0x0,
	[SPECIES_UNOWN_R] = 0x0,
	[SPECIES_UNOWN_S] = 0x0,
	[SPECIES_UNOWN_T] = 0x0,
	[SPECIES_UNOWN_U] = 0x0,
	[SPECIES_UNOWN_V] = 0x0,
	[SPECIES_UNOWN_W] = 0x0,
	[SPECIES_UNOWN_X] = 0x0,
	[SPECIES_UNOWN_Y] = 0x0,
	[SPECIES_UNOWN_Z] = 0x0,
	[SPECIES_UNOWN_EXCLAMATION] = 0x0,
	[SPECIES_UNOWN_QUESTION] = 0x0,
	[SPECIES_TURTWIG] = 0x0,
	[SPECIES_GROTLE] = 0x0,
	[SPECIES_TORTERRA] = 0x0,
	[SPECIES_CHIMCHAR] = 0x0,
	[SPECIES_MONFERNO] = 0x0,
	[SPECIES_INFERNAPE] = 0x0,
	[SPECIES_PIPLUP] = 0x0,
	[SPECIES_PRINPLUP] = 0x0,
	[SPECIES_EMPOLEON] = 0x0,
	[SPECIES_STARLY] = 0x0,
	[SPECIES_STARAVIA] = 0x0,
	[SPECIES_STARAPTOR] = 0x0,
	[SPECIES_BIDOOF] = 0x0,
	[SPECIES_BIBAREL] = 0x0,
	[SPECIES_KRICKETOT] = 0x0,
	[SPECIES_KRICKETUNE] = 0x0,
	[SPECIES_SHINX] = 0x0,
	[SPECIES_LUXIO] = 0x0,
	[SPECIES_LUXRAY] = 0x0,
	[SPECIES_BUDEW] = 0x0,
	[SPECIES_ROSERADE] = 0x0,
	[SPECIES_CRANIDOS] = 0x0,
	[SPECIES_RAMPARDOS] = 0x0,
	[SPECIES_SHIELDON] = 0x0,
	[SPECIES_BASTIODON] = 0x0,
	[SPECIES_BURMY] = 0x0,
	[SPECIES_WORMADAM] = 0x0,
	[SPECIES_MOTHIM] = 0xe,
	[SPECIES_COMBEE] = 0xe,
	[SPECIES_VESPIQUEN] = 0xa,
	[SPECIES_PACHIRISU] = 0x0,
	[SPECIES_BUIZEL] = 0x0,
	[SPECIES_FLOATZEL] = 0x0,
	[SPECIES_CHERUBI] = 0x0,
	[SPECIES_CHERRIM] = 0x0,
	[SPECIES_SHELLOS] = 0x0,
	[SPECIES_GASTRODON] = 0x0,
	[SPECIES_AMBIPOM] = 0x0,
	[SPECIES_DRIFLOON] = 0xa,
	[SPECIES_DRIFBLIM] = 0xa,
	[SPECIES_BUNEARY] = 0x0,
	[SPECIES_LOPUNNY] = 0x0,
	[SPECIES_MISMAGIUS] = 0xa,
	[SPECIES_HONCHKROW] = 0x0,
	[SPECIES_GLAMEOW] = 0x0,
	[SPECIES_PURUGLY] = 0x0,
	[SPECIES_CHINGLING] = 0x0,
	[SPECIES_STUNKY] = 0x0,
	[SPECIES_SKUNTANK] = 0x0,
	[SPECIES_BRONZOR] = 0xe,
	[SPECIES_BRONZONG] = 0xe,
	[SPECIES_BONSLY] = 0x0,
	[SPECIES_MIME_JR] = 0x0,
	[SPECIES_HAPPINY] = 0x0,
	[SPECIES_CHATOT] = 0x0,
	[SPECIES_SPIRITOMB] = 0x0,
	[SPECIES_GIBLE] = 0x0,
	[SPECIES_GABITE] = 0x0,
	[SPECIES_GARCHOMP] = 0x0,
	[SPECIES_MUNCHLAX] = 0x0,
	[SPECIES_RIOLU] = 0x0,
	[SPECIES_LUCARIO] = 0x0,
	[SPECIES_HIPPOPOTAS] = 0x0,
	[SPECIES_HIPPOWDON] = 0x0,
	[SPECIES_SKORUPI] = 0x0,
	[SPECIES_DRAPION] = 0x0,
	[SPECIES_CROAGUNK] = 0x0,
	[SPECIES_TOXICROAK] = 0x0,
	[SPECIES_CARNIVINE] = 0x0,
	[SPECIES_FINNEON] = 0x0,
	[SPECIES_LUMINEON] = 0x0,
	[SPECIES_MANTYKE] = 0xe,
	[SPECIES_SNOVER] = 0x0,
	[SPECIES_ABOMASNOW] = 0x0,
	[SPECIES_WEAVILE] = 0x0,
	[SPECIES_MAGNEZONE] = 0x8,
	[SPECIES_LICKILICKY] = 0x0,
	[SPECIES_RHYPERIOR] = 0x0,
	[SPECIES_TANGROWTH] = 0x0,
	[SPECIES_ELECTIVIRE] = 0x0,
	[SPECIES_MAGMORTAR] = 0x0,
	[SPECIES_TOGEKISS] = 0xe,
	[SPECIES_YANMEGA] = 0xa,
	[SPECIES_LEAFEON] = 0x0,
	[SPECIES_GLACEON] = 0x0,
	[SPECIES_GLISCOR] = 0x8,
	[SPECIES_MAMOSWINE] = 0x0,
	[SPECIES_PORYGON_Z] = 0x0,
	[SPECIES_GALLADE] = 0x0,
	[SPECIES_PROBOPASS] = 0x6,
	[SPECIES_DUSKNOIR] = 0x8,
	[SPECIES_FROSLASS] = 0x0,
	[SPECIES_ROTOM] = 0xa,
	[SPECIES_UXIE] = 0x8,
	[SPECIES_MESPRIT] = 0x8,
	[SPECIES_AZELF] = 0x8,
	[SPECIES_DIALGA] = 0x0,
	[SPECIES_PALKIA] = 0x0,
	[SPECIES_HEATRAN] = 0x0,
	[SPECIES_REGIGIGAS] = 0x0,
	[SPECIES_GIRATINA] = 0x0,
	[SPECIES_CRESSELIA] = 0xa,
	[SPECIES_PHIONE] = 0x0,
	[SPECIES_MANAPHY] = 0x0,
	[SPECIES_DARKRAI] = 0x8,
	[SPECIES_SHAYMIN] = 0x0,
	[SPECIES_ARCEUS] = 0x0,
	[SPECIES_VICTINI] = 0x0,
	[SPECIES_SNIVY] = 0x0,
	[SPECIES_SERVINE] = 0x0,
	[SPECIES_SERPERIOR] = 0x0,
	[SPECIES_TEPIG] = 0x0,
	[SPECIES_PIGNITE] = 0x0,
	[SPECIES_EMBOAR] = 0x0,
	[SPECIES_OSHAWOTT] = 0x0,
	[SPECIES_DEWOTT] = 0x0,
	[SPECIES_SAMUROTT] = 0x0,
	[SPECIES_PATRAT] = 0x0,
	[SPECIES_WATCHOG] = 0x0,
	[SPECIES_LILLIPUP] = 0x0,
	[SPECIES_HERDIER] = 0x0,
	[SPECIES_STOUTLAND] = 0x0,
	[SPECIES_PURRLOIN] = 0x0,
	[SPECIES_LIEPARD] = 0x0,
	[SPECIES_PANSAGE] = 0x0,
	[SPECIES_SIMISAGE] = 0x0,
	[SPECIES_PANSEAR] = 0x0,
	[SPECIES_SIMISEAR] = 0x0,
	[SPECIES_PANPOUR] = 0x0,
	[SPECIES_SIMIPOUR] = 0x0,
	[SPECIES_MUNNA] = 0xa,
	[SPECIES_MUSHARNA] = 0xa,
	[SPECIES_PIDOVE] = 0x0,
	[SPECIES_TRANQUILL] = 0x0,
	[SPECIES_UNFEZANT] = 0x0,
	[SPECIES_BLITZLE] = 0x0,
	[SPECIES_ZEBSTRIKA] = 0x0,
	[SPECIES_ROGGENROLA] = 0x0,
	[SPECIES_BOLDORE] = 0x0,
	[SPECIES_GIGALITH] = 0x0,
	[SPECIES_WOOBAT] = 0xe,
	[SPECIES_SWOOBAT] = 0x8,
	[SPECIES_DRILBUR] = 0x0,
	[SPECIES_EXCADRILL] = 0x0,
	[SPECIES_AUDINO] = 0x0,
	[SPECIES_TIMBURR] = 0x0,
	[SPECIES_GURDURR] = 0x0,
	[SPECIES_CONKELDURR] = 0x0,
	[SPECIES_TYMPOLE] = 0x0,
	[SPECIES_PALPITOAD] = 0x0,
	[SPECIES_SEISMITOAD] = 0x0,
	[SPECIES_THROH] = 0x0,
	[SPECIES_SAWK] = 0x0,
	[SPECIES_SEWADDLE] = 0x0,
	[SPECIES_SWADLOON] = 0x0,
	[SPECIES_LEAVANNY] = 0x0,
	[SPECIES_VENIPEDE] = 0x0,
	[SPECIES_WHIRLIPEDE] = 0x0,
	[SPECIES_SCOLIPEDE] = 0x0,
	[SPECIES_COTTONEE] = 0x0,
	[SPECIES_WHIMSICOTT] = 0x0,
	[SPECIES_PETILIL] = 0x0,
	[SPECIES_LILLIGANT] = 0x0,
	[SPECIES_BASCULIN_RED] = 0x0,
	[SPECIES_SANDILE] = 0x0,
	[SPECIES_KROKOROK] = 0x0,
	[SPECIES_KROOKODILE] = 0x0,
	[SPECIES_DARUMAKA] = 0x0,
	[SPECIES_DARMANITAN] = 0x0,
	[SPECIES_MARACTUS] = 0x0,
	[SPECIES_DWEBBLE] = 0x0,
	[SPECIES_CRUSTLE] = 0x0,
	[SPECIES_SCRAGGY] = 0x0,
	[SPECIES_SCRAFTY] = 0x0,
	[SPECIES_SIGILYPH] = 0x6,
	[SPECIES_YAMASK] = 0x0,
	[SPECIES_COFAGRIGUS] = 0x0,
	[SPECIES_TIRTOUGA] = 0x0,
	[SPECIES_CARRACOSTA] = 0x0,
	[SPECIES_ARCHEN] = 0x0,
	[SPECIES_ARCHEOPS] = 0x8,
	[SPECIES_TRUBBISH] = 0x0,
	[SPECIES_GARBODOR] = 0x0,
	[SPECIES_ZORUA] = 0x0,
	[SPECIES_ZOROARK] = 0x0,
	[SPECIES_MINCCINO] = 0x0,
	[SPECIES_CINCCINO] = 0x0,
	[SPECIES_GOTHITA] = 0x0,
	[SPECIES_GOTHORITA] = 0x0,
	[SPECIES_GOTHITELLE] = 0x0,
	[SPECIES_SOLOSIS] = 0x0,
	[SPECIES_DUOSION] = 0x0,
	[SPECIES_REUNICLUS] = 0x0,
	[SPECIES_DUCKLETT] = 0x0,
	[SPECIES_SWANNA] = 0x0,
	[SPECIES_VANILLITE] = 0x0,
	[SPECIES_VANILLISH] = 0x0,
	[SPECIES_VANILLUXE] = 0x0,
	[SPECIES_DEERLING] = 0x0,
	[SPECIES_SAWSBUCK] = 0x0,
	[SPECIES_EMOLGA] = 0xe,
	[SPECIES_KARRABLAST] = 0x0,
	[SPECIES_ESCAVALIER] = 0x4,
	[SPECIES_FOONGUS] = 0x0,
	[SPECIES_AMOONGUSS] = 0x0,
	[SPECIES_FRILLISH] = 0x0,
	[SPECIES_JELLICENT] = 0x0,
	[SPECIES_ALOMOMOLA] = 0x0,
	[SPECIES_JOLTIK] = 0x0,
	[SPECIES_GALVANTULA] = 0x0,
	[SPECIES_FERROSEED] = 0x0,
	[SPECIES_FERROTHORN] = 0x0,
	[SPECIES_KLINK] = 0xe,
	[SPECIES_KLANG] = 0xd,
	[SPECIES_KLINKLANG] = 0x5,
	[SPECIES_TYNAMO] = 0xe,
	[SPECIES_EELEKTRIK] = 0x7,
	[SPECIES_EELEKTROSS] = 0x8,
	[SPECIES_ELGYEM] = 0x8,
	[SPECIES_BEHEEYEM] = 0x8,
	[SPECIES_LITWICK] = 0x0,
	[SPECIES_LAMPENT] = 0x4,
	[SPECIES_CHANDELURE] = 0x6,
	[SPECIES_AXEW] = 0x0,
	[SPECIES_FRAXURE] = 0x0,
	[SPECIES_HAXORUS] = 0x0,
	[SPECIES_CUBCHOO] = 0x0,
	[SPECIES_BEARTIC] = 0x0,
	[SPECIES_CRYOGONAL] = 0x6,
	[SPECIES_SHELMET] = 0x0,
	[SPECIES_ACCELGOR] = 0x0,
	[SPECIES_STUNFISK] = 0x0,
	[SPECIES_MIENFOO] = 0x0,
	[SPECIES_MIENSHAO] = 0x0,
	[SPECIES_DRUDDIGON] = 0x0,
	[SPECIES_GOLETT] = 0x0,
	[SPECIES_GOLURK] = 0x0,
	[SPECIES_PAWNIARD] = 0x0,
	[SPECIES_BISHARP] = 0x0,
	[SPECIES_BOUFFALANT] = 0x0,
	[SPECIES_RUFFLET] = 0x0,
	[SPECIES_BRAVIARY] = 0x6,
	[SPECIES_VULLABY] = 0x0,
	[SPECIES_MANDIBUZZ] = 0x0,
	[SPECIES_HEATMOR] = 0x0,
	[SPECIES_DURANT] = 0x0,
	[SPECIES_DEINO] = 0x0,
	[SPECIES_ZWEILOUS] = 0x0,
	[SPECIES_HYDREIGON] = 0x6,
	[SPECIES_LARVESTA] = 0x0,
	[SPECIES_VOLCARONA] = 0x8,
	[SPECIES_COBALION] = 0x0,
	[SPECIES_TERRAKION] = 0x0,
	[SPECIES_VIRIZION] = 0x0,
	[SPECIES_TORNADUS] = 0x6,
	[SPECIES_THUNDURUS] = 0x6,
	[SPECIES_RESHIRAM] = 0x0,
	[SPECIES_ZEKROM] = 0x0,
	[SPECIES_LANDORUS] = 0x6,
	[SPECIES_KYUREM] = 0x0,
	[SPECIES_KELDEO] = 0x0,
	[SPECIES_MELOETTA] = 0x0,
	[SPECIES_GENESECT] = 0x0,
	[SPECIES_UNFEZANT_F] = 0x0,
	[SPECIES_FRILLISH_F] = 0x0,
	[SPECIES_JELLICENT_F] = 0x0,
	[SPECIES_SHADOW_WARRIOR] = 0x0,
	[SPECIES_BURMY_SANDY] = 0x0,
	[SPECIES_BURMY_TRASH] = 0x0,
	[SPECIES_WORMADAM_SANDY] = 0x0,
	[SPECIES_WORMADAM_TRASH] = 0x0,
	[SPECIES_SHELLOS_EAST] = 0x0,
	[SPECIES_GASTRODON_EAST] = 0x0,
	[SPECIES_ROTOM_HEAT] = 0x8,
	[SPECIES_ROTOM_WASH] = 0x8,
	[SPECIES_ROTOM_FROST] = 0x8,
	[SPECIES_ROTOM_FAN] = 0xa,
	[SPECIES_ROTOM_MOW] = 0x8,
	[SPECIES_GIRATINA_ORIGIN] = 0x6,
	[SPECIES_SHAYMIN_SKY] = 0x0,
	[SPECIES_ARCEUS_FIGHT] = 0x0,
	[SPECIES_ARCEUS_FLYING] = 0x0,
	[SPECIES_ARCEUS_POISON] = 0x0,
	[SPECIES_ARCEUS_GROUND] = 0x0,
	[SPECIES_ARCEUS_ROCK] = 0x0,
	[SPECIES_ARCEUS_BUG] = 0x0,
	[SPECIES_ARCEUS_GHOST] = 0x0,
	[SPECIES_ARCEUS_STEEL] = 0x0,
	[SPECIES_ARCEUS_FIRE] = 0x0,
	[SPECIES_ARCEUS_WATER] = 0x0,
	[SPECIES_ARCEUS_GRASS] = 0x0,
	[SPECIES_ARCEUS_ELECTRIC] = 0x0,
	[SPECIES_ARCEUS_PSYCHIC] = 0x0,
	[SPECIES_ARCEUS_ICE] = 0x0,
	[SPECIES_ARCEUS_DRAGON] = 0x0,
	[SPECIES_ARCEUS_DARK] = 0x0,
	[SPECIES_BASCULIN_BLUE] = 0x0,
	[SPECIES_DARMANITANZEN] = 0x0,
	[SPECIES_DEERLING_SUMMER] = 0x0,
	[SPECIES_DEERLING_AUTUMN] = 0x0,
	[SPECIES_DEERLING_WINTER] = 0x0,
	[SPECIES_SAWSBUCK_SUMMER] = 0x0,
	[SPECIES_SAWSBUCK_AUTUMN] = 0x0,
	[SPECIES_SAWSBUCK_WINTER] = 0x0,
	[SPECIES_HIPPOPOTAS_F] = 0x0,
	[SPECIES_HIPPOWDON_F] = 0x0,
	[SPECIES_MELOETTA_PIROUETTE] = 0x0,
	[SPECIES_GENESECT_SHOCK] = 0x0,
	[SPECIES_GENESECT_BURN] = 0x0,
	[SPECIES_GENESECT_CHILL] = 0x0,
	[SPECIES_GENESECT_DOUSE] = 0x0,
	[SPECIES_CHERRIM_SUN] = 0x0,
	[SPECIES_KYUREM_BLACK] = 0x0,
	[SPECIES_KYUREM_WHITE] = 0x0,
	[SPECIES_TORNADUS_THERIAN] = 0x0,
	[SPECIES_THUNDURUS_THERIAN] = 0x8,
	[SPECIES_LANDORUS_THERIAN] = 0x6,
	[SPECIES_KELDEO_RESOLUTE] = 0x0,
	[SPECIES_CHESPIN] = 0x0,
	[SPECIES_QUILLADIN] = 0x0,
	[SPECIES_CHESNAUGHT] = 0x0,
	[SPECIES_FENNEKIN] = 0x0,
	[SPECIES_BRAIXEN] = 0x0,
	[SPECIES_DELPHOX] = 0x0,
	[SPECIES_FROAKIE] = 0x0,
	[SPECIES_FROGADIER] = 0x0,
	[SPECIES_GRENINJA] = 0x0,
	[SPECIES_BUNNELBY] = 0x0,
	[SPECIES_DIGGERSBY] = 0x0,
	[SPECIES_FLETCHLING] = 0x0,
	[SPECIES_FLETCHINDER] = 0xe,
	[SPECIES_TALONFLAME] = 0x8,
	[SPECIES_SCATTERBUG] = 0x0,
	[SPECIES_SPEWPA] = 0x0,
	[SPECIES_VIVILLON] = 0x8,
	[SPECIES_LITLEO] = 0x0,
	[SPECIES_PYROAR] = 0x0,
	[SPECIES_FLABEBE] = 0x0,
	[SPECIES_FLOETTE] = 0x0,
	[SPECIES_FLORGES] = 0x0,
	[SPECIES_SKIDDO] = 0x0,
	[SPECIES_GOGOAT] = 0x0,
	[SPECIES_PANCHAM] = 0x0,
	[SPECIES_PANGORO] = 0x0,
	[SPECIES_FURFROU] = 0x0,
	[SPECIES_ESPURR] = 0x0,
	[SPECIES_MEOWSTIC] = 0x0,
	[SPECIES_HONEDGE] = 0x0,
	[SPECIES_DOUBLADE] = 0x8,
	[SPECIES_AEGISLASH] = 0x6,
	[SPECIES_SPRITZEE] = 0x0,
	[SPECIES_AROMATISSE] = 0x0,
	[SPECIES_SWIRLIX] = 0x0,
	[SPECIES_SLURPUFF] = 0x0,
	[SPECIES_INKAY] = 0x0,
	[SPECIES_MALAMAR] = 0x0,
	[SPECIES_BINACLE] = 0x0,
	[SPECIES_BARBARACLE] = 0x0,
	[SPECIES_SKRELP] = 0x0,
	[SPECIES_DRAGALGE] = 0x0,
	[SPECIES_CLAUNCHER] = 0x0,
	[SPECIES_CLAWITZER] = 0x0,
	[SPECIES_HELIOPTILE] = 0x0,
	[SPECIES_HELIOLISK] = 0x0,
	[SPECIES_TYRUNT] = 0x0,
	[SPECIES_TYRANTRUM] = 0x0,
	[SPECIES_AMAURA] = 0x0,
	[SPECIES_AURORUS] = 0x0,
	[SPECIES_SYLVEON] = 0x0,
	[SPECIES_HAWLUCHA] = 0x0,
	[SPECIES_DEDENNE] = 0x0,
	[SPECIES_CARBINK] = 0x0,
	[SPECIES_GOOMY] = 0x0,
	[SPECIES_SLIGGOO] = 0x0,
	[SPECIES_GOODRA] = 0x0,
	[SPECIES_KLEFKI] = 0x8,
	[SPECIES_PHANTUMP] = 0x0,
	[SPECIES_TREVENANT] = 0x0,
	[SPECIES_PUMPKABOO] = 0x0,
	[SPECIES_GOURGEIST] = 0x0,
	[SPECIES_BERGMITE] = 0x0,
	[SPECIES_AVALUGG] = 0x0,
	[SPECIES_NOIBAT] = 0x8,
	[SPECIES_NOIVERN] = 0x0,
	[SPECIES_XERNEAS] = 0x0,
	[SPECIES_YVELTAL] = 0x6,
	[SPECIES_ZYGARDE] = 0x0,
	[SPECIES_DIANCIE] = 0x0,
	[SPECIES_HOOPA] = 0x8,
	[SPECIES_HOOPA_UNBOUND] = 0x0,
	[SPECIES_VOLCANION] = 0x0,
	[SPECIES_PYROAR_FEMALE] = 0x0,
	[SPECIES_MEOWSTIC_FEMALE] = 0x0,
	[SPECIES_AEGISLASH_BLADE] = 0x6,
	[SPECIES_ARCEUS_FAIRY] = 0x0,
	[SPECIES_ZYGARDE_CELL] = 0x0,
	[SPECIES_ZYGARDE_CORE] = 0x0,
	[SPECIES_ZYGARDE_10] = 0x0,
	[SPECIES_ZYGARDE_COMPLETE] = 0x0,
	[SPECIES_ASHGRENINJA] = 0x0,
	[SPECIES_FLABEBE_BLUE] = 0x0,
	[SPECIES_FLABEBE_ORANGE] = 0x0,
	[SPECIES_FLABEBE_YELLOW] = 0x0,
	[SPECIES_FLABEBE_WHITE] = 0x0,
	[SPECIES_FLOETTE_BLUE] = 0x0,
	[SPECIES_FLOETTE_ORANGE] = 0x0,
	[SPECIES_FLOETTE_YELLOW] = 0x0,
	[SPECIES_FLOETTE_WHITE] = 0x0,
	[SPECIES_FLOETTE_ETERNAL] = 0x0,
	[SPECIES_FLORGES_BLUE] = 0x0,
	[SPECIES_FLORGES_ORANGE] = 0x0,
	[SPECIES_FLORGES_YELLOW] = 0x0,
	[SPECIES_FLORGES_WHITE] = 0x0,
	[SPECIES_PUMPKABOO_XL] = 0x0,
	[SPECIES_PUMPKABOO_L] = 0x0,
	[SPECIES_PUMPKABOO_M] = 0x0,
	[SPECIES_GOURGEIST_XL] = 0x0,
	[SPECIES_GOURGEIST_L] = 0x0,
	[SPECIES_GOURGEIST_M] = 0x0,
	[SPECIES_FURFROU_HEART] = 0x0,
	[SPECIES_FURFROU_DIAMOND] = 0x0,
	[SPECIES_FURFROU_STAR] = 0x0,
	[SPECIES_FURFROU_PHAROAH] = 0x0,
	[SPECIES_FURFROU_KABUKI] = 0x0,
	[SPECIES_FURFROU_LA_REINE] = 0x0,
	[SPECIES_FURFROU_MATRON] = 0x0,
	[SPECIES_FURFROU_DANDY] = 0x0,
	[SPECIES_FURFROU_DEBUTANTE] = 0x0,
	[SPECIES_VIVILLON_FANCY] = 0x8,
	[SPECIES_VENUSAUR_MEGA] = 0x0,
	[SPECIES_CHARIZARD_MEGA_X] = 0x0,
	[SPECIES_CHARIZARD_MEGA_Y] = 0x0,
	[SPECIES_BLASTOISE_MEGA] = 0x0,
	[SPECIES_BEEDRILL_MEGA] = 0x8,
	[SPECIES_PIDGEOT_MEGA] = 0x8,
	[SPECIES_ALAKAZAM_MEGA] = 0x6,
	[SPECIES_SLOWBRO_MEGA] = 0x0,
	[SPECIES_GENGAR_MEGA] = 0x0,
	[SPECIES_KANGASKHAN_MEGA] = 0x0,
	[SPECIES_PINSIR_MEGA] = 0x8,
	[SPECIES_GYARADOS_MEGA] = 0x7,
	[SPECIES_AERODACTYL_MEGA] = 0x8,
	[SPECIES_MEWTWO_MEGA_X] = 0x0,
	[SPECIES_MEWTWO_MEGA_Y] = 0x6,
	[SPECIES_AMPHAROS_MEGA] = 0x0,
	[SPECIES_STEELIX_MEGA] = 0x0,
	[SPECIES_SCIZOR_MEGA] = 0x0,
	[SPECIES_HERACROSS_MEGA] = 0x0,
	[SPECIES_HOUNDOOM_MEGA] = 0x0,
	[SPECIES_TYRANITAR_MEGA] = 0x0,
	[SPECIES_SCEPTILE_MEGA] = 0x0,
	[SPECIES_BLAZIKEN_MEGA] = 0x0,
	[SPECIES_SWAMPERT_MEGA] = 0x0,
	[SPECIES_GARDEVOIR_MEGA] = 0x0,
	[SPECIES_SABLEYE_MEGA] = 0x0,
	[SPECIES_MAWILE_MEGA] = 0x0,
	[SPECIES_AGGRON_MEGA] = 0x0,
	[SPECIES_MEDICHAM_MEGA] = 0x0,
	[SPECIES_MANECTRIC_MEGA] = 0x0,
	[SPECIES_SHARPEDO_MEGA] = 0x0,
	[SPECIES_CAMERUPT_MEGA] = 0x0,
	[SPECIES_ALTARIA_MEGA] = 0x0,
	[SPECIES_BANETTE_MEGA] = 0x0,
	[SPECIES_ABSOL_MEGA] = 0x0,
	[SPECIES_GLALIE_MEGA] = 0x8,
	[SPECIES_SALAMENCE_MEGA] = 0x0,
	[SPECIES_METAGROSS_MEGA] = 0x4,
	[SPECIES_LATIAS_MEGA] = 0x4,
	[SPECIES_LATIOS_MEGA] = 0x4,
	[SPECIES_GROUDON_PRIMAL] = 0x0,
	[SPECIES_KYOGRE_PRIMAL] = 0x0,
	[SPECIES_RAYQUAZA_MEGA] = 0x6,
	[SPECIES_LOPUNNY_MEGA] = 0x0,
	[SPECIES_GARCHOMP_MEGA] = 0x0,
	[SPECIES_LUCARIO_MEGA] = 0x0,
	[SPECIES_ABOMASNOW_MEGA] = 0x0,
	[SPECIES_GALLADE_MEGA] = 0x0,
	[SPECIES_AUDINO_MEGA] = 0x0,
	[SPECIES_DIANCIE_MEGA] = 0x4,
	[SPECIES_DIALGA_PRIMAL] = 0x0,
	[SPECIES_PALKIA_PRIMAL] = 0x0,
	[SPECIES_VIVILLON_ARCHIPELAGO] = 0x8,
	[SPECIES_VIVILLON_CONTINENTAL] = 0x8,
	[SPECIES_VIVILLON_ELEGANT] = 0x8,
	[SPECIES_VIVILLON_GARDEN] = 0x8,
	[SPECIES_VIVILLON_HIGH_PLAINS] = 0x8,
	[SPECIES_VIVILLON_ICY_SNOW] = 0x8,
	[SPECIES_VIVILLON_JUNGLE] = 0x8,
	[SPECIES_VIVILLON_MARINE] = 0x8,
	[SPECIES_VIVILLON_MODERN] = 0x8,
	[SPECIES_VIVILLON_MONSOON] = 0x8,
	[SPECIES_VIVILLON_OCEAN] = 0x8,
	[SPECIES_VIVILLON_POKEBALL] = 0x8,
	[SPECIES_VIVILLON_POLAR] = 0x8,
	[SPECIES_VIVILLON_RIVER] = 0x8,
	[SPECIES_VIVILLON_SANDSTORM] = 0x8,
	[SPECIES_VIVILLON_SAVANNA] = 0x8,
	[SPECIES_VIVILLON_SUN] = 0x8,
	[SPECIES_VIVILLON_TUNDRA] = 0x8,
	[SPECIES_ROWLET] = 0x0,
	[SPECIES_DARTRIX] = 0x0,
	[SPECIES_DECIDUEYE] = 0x0,
	[SPECIES_LITTEN] = 0x0,
	[SPECIES_TORRACAT] = 0x0,
	[SPECIES_INCINEROAR] = 0x0,
	[SPECIES_POPPLIO] = 0x0,
	[SPECIES_BRIONNE] = 0x0,
	[SPECIES_PRIMARINA] = 0x0,
	[SPECIES_PIKIPEK] = 0xa,
	[SPECIES_TRUMBEAK] = 0x0,
	[SPECIES_TOUCANNON] = 0x0,
	[SPECIES_YUNGOOS] = 0x0,
	[SPECIES_GUMSHOOS] = 0x0,
	[SPECIES_GRUBBIN] = 0x0,
	[SPECIES_CHARJABUG] = 0x0,
	[SPECIES_VIKAVOLT] = 0x8,
	[SPECIES_CRABRAWLER] = 0x0,
	[SPECIES_CRABOMINABLE] = 0x0,
	[SPECIES_ORICORIO] = 0x0,
	[SPECIES_CUTIEFLY] = 0xe,
	[SPECIES_RIBOMBEE] = 0x8,
	[SPECIES_ROCKRUFF] = 0x0,
	[SPECIES_LYCANROC] = 0x0,
	[SPECIES_WISHIWASHI] = 0xe,
	[SPECIES_MAREANIE] = 0x0,
	[SPECIES_TOXAPEX] = 0x0,
	[SPECIES_MUDBRAY] = 0x0,
	[SPECIES_MUDSDALE] = 0x0,
	[SPECIES_DEWPIDER] = 0x0,
	[SPECIES_ARAQUANID] = 0x0,
	[SPECIES_FOMANTIS] = 0x0,
	[SPECIES_LURANTIS] = 0x0,
	[SPECIES_MORELULL] = 0x0,
	[SPECIES_SHIINOTIC] = 0x0,
	[SPECIES_SALANDIT] = 0x0,
	[SPECIES_SALAZZLE] = 0x0,
	[SPECIES_STUFFUL] = 0x0,
	[SPECIES_BEWEAR] = 0x0,
	[SPECIES_BOUNSWEET] = 0x0,
	[SPECIES_STEENEE] = 0x0,
	[SPECIES_TSAREENA] = 0x0,
	[SPECIES_COMFEY] = 0x0,
	[SPECIES_ORANGURU] = 0x0,
	[SPECIES_PASSIMIAN] = 0x0,
	[SPECIES_WIMPOD] = 0x0,
	[SPECIES_GOLISOPOD] = 0x0,
	[SPECIES_SANDYGAST] = 0x0,
	[SPECIES_PALOSSAND] = 0x0,
	[SPECIES_PYUKUMUKU] = 0x0,
	[SPECIES_TYPE_NULL] = 0x0,
	[SPECIES_SILVALLY] = 0x0,
	[SPECIES_MINIOR_SHIELD] = 0xe,
	[SPECIES_KOMALA] = 0x0,
	[SPECIES_TURTONATOR] = 0x0,
	[SPECIES_TOGEDEMARU] = 0x0,
	[SPECIES_MIMIKYU] = 0x0,
	[SPECIES_BRUXISH] = 0x0,
	[SPECIES_DRAMPA] = 0x0,
	[SPECIES_DHELMISE] = 0x0,
	[SPECIES_JANGMO_O] = 0x0,
	[SPECIES_HAKAMO_O] = 0x0,
	[SPECIES_KOMMO_O] = 0x0,
	[SPECIES_TAPU_KOKO] = 0x8,
	[SPECIES_TAPU_LELE] = 0x8,
	[SPECIES_TAPU_BULU] = 0x8,
	[SPECIES_TAPU_FINI] = 0x8,
	[SPECIES_COSMOG] = 0x8,
	[SPECIES_COSMOEM] = 0x8,
	[SPECIES_SOLGALEO] = 0x0,
	[SPECIES_LUNALA] = 0x8,
	[SPECIES_NIHILEGO] = 0x8,
	[SPECIES_BUZZWOLE] = 0x0,
	[SPECIES_PHEROMOSA] = 0x0,
	[SPECIES_XURKITREE] = 0x0,
	[SPECIES_CELESTEELA] = 0x0,
	[SPECIES_KARTANA] = 0x0,
	[SPECIES_GUZZLORD] = 0x0,
	[SPECIES_NECROZMA] = 0x0,
	[SPECIES_MAGEARNA] = 0x0,
	[SPECIES_MARSHADOW] = 0x0,
	[SPECIES_RATTATA_A] = 0x0,
	[SPECIES_RATICATE_A] = 0x0,
	[SPECIES_RAICHU_A] = 0x6,
	[SPECIES_SANDSHREW_A] = 0x0,
	[SPECIES_SANDSLASH_A] = 0x0,
	[SPECIES_VULPIX_A] = 0x0,
	[SPECIES_NINETALES_A] = 0x0,
	[SPECIES_DIGLETT_A] = 0x0,
	[SPECIES_DUGTRIO_A] = 0x0,
	[SPECIES_MEOWTH_A] = 0x0,
	[SPECIES_PERSIAN_A] = 0x0,
	[SPECIES_GEODUDE_A] = 0x0,
	[SPECIES_GRAVELER_A] = 0x0,
	[SPECIES_GOLEM_A] = 0x0,
	[SPECIES_GRIMER_A] = 0x0,
	[SPECIES_MUK_A] = 0x0,
	[SPECIES_EXEGGCUTE_A] = 0x0,
	[SPECIES_EXEGGUTOR_A] = 0x0,
	[SPECIES_CUBONE_A] = 0x0,
	[SPECIES_MAROWAK_A] = 0x0,
	[SPECIES_DEOXYS_ATTACK] = 0x0,
	[SPECIES_DEOXYS_DEFENSE] = 0x0,
	[SPECIES_DEOXYS_SPEED] = 0x0,
	[SPECIES_ORICORIO_Y] = 0x0,
	[SPECIES_ORICORIO_P] = 0x0,
	[SPECIES_ORICORIO_S] = 0x0,
	[SPECIES_LYCANROC_N] = 0x0,
	[SPECIES_WISHIWASHI_S] = 0x8,
	[SPECIES_SILVALLY_FIGHT] = 0x0,
	[SPECIES_SILVALLY_FLYING] = 0x0,
	[SPECIES_SILVALLY_POISON] = 0x0,
	[SPECIES_SILVALLY_GROUND] = 0x0,
	[SPECIES_SILVALLY_ROCK] = 0x0,
	[SPECIES_SILVALLY_BUG] = 0x0,
	[SPECIES_SILVALLY_GHOST] = 0x0,
	[SPECIES_SILVALLY_STEEL] = 0x0,
	[SPECIES_SILVALLY_FIRE] = 0x0,
	[SPECIES_SILVALLY_WATER] = 0x0,
	[SPECIES_SILVALLY_GRASS] = 0x0,
	[SPECIES_SILVALLY_ELECTRIC] = 0x0,
	[SPECIES_SILVALLY_PSYCHIC] = 0x0,
	[SPECIES_SILVALLY_ICE] = 0x0,
	[SPECIES_SILVALLY_DRAGON] = 0x0,
	[SPECIES_SILVALLY_DARK] = 0x0,
	[SPECIES_SILVALLY_FAIRY] = 0x0,
	[SPECIES_MINIOR_RED] = 0xe,
	[SPECIES_MINIOR_BLUE] = 0xe,
	[SPECIES_MINIOR_ORANGE] = 0xe,
	[SPECIES_MINIOR_YELLOW] = 0xe,
	[SPECIES_MINIOR_INDIGO] = 0xe,
	[SPECIES_MINIOR_GREEN] = 0xe,
	[SPECIES_MINIOR_VIOLET] = 0xe,
	[SPECIES_MIMIKYU_BUSTED] = 0x0,
	[SPECIES_MAGEARNA_P] = 0x0,
	[SPECIES_POIPOLE] = 0x0,
	[SPECIES_NAGANADEL] = 0x6,
	[SPECIES_STAKATAKA] = 0x0,
	[SPECIES_BLACEPHALON] = 0x0,
	[SPECIES_ZERAORA] = 0x0,
	[SPECIES_NECROZMA_DUSK_MANE] = 0x0,
	[SPECIES_NECROZMA_DAWN_WINGS] = 0x6,
	[SPECIES_NECROZMA_ULTRA] = 0x6,
	[SPECIES_LYCANROC_DUSK] = 0x0,
	[SPECIES_MELTAN] = 0x0,
	[SPECIES_MELMETAL] = 0x0,
	[SPECIES_PIKACHU_SURFING] = 0x0,
	[SPECIES_PIKACHU_FLYING] = 0x8,
	[SPECIES_PIKACHU_COSPLAY] = 0x0,
	[SPECIES_PIKACHU_LIBRE] = 0x0,
	[SPECIES_PIKACHU_POP_STAR] = 0x0,
	[SPECIES_PIKACHU_ROCK_STAR] = 0x0,
	[SPECIES_PIKACHU_BELLE] = 0x0,
	[SPECIES_PIKACHU_PHD] = 0x0,
	[SPECIES_PIKACHU_CAP_ORIGINAL] = 0x0,
	[SPECIES_PIKACHU_CAP_HOENN] = 0x0,
	[SPECIES_PIKACHU_CAP_SINNOH] = 0x0,
	[SPECIES_PIKACHU_CAP_UNOVA] = 0x0,
	[SPECIES_PIKACHU_CAP_KALOS] = 0x0,
	[SPECIES_PIKACHU_CAP_ALOLA] = 0x0,
	[SPECIES_PIKACHU_CAP_PARTNER] = 0x0,
	[SPECIES_PICHU_SPIKY] = 0x0,
	[SPECIES_XERNEAS_NATURAL] = 0x0,
	[SPECIES_GROOKEY] = 0x0,
	[SPECIES_THWACKEY] = 0x0,
	[SPECIES_RILLABOOM] = 0x0,
	[SPECIES_SCORBUNNY] = 0x0,
	[SPECIES_RABOOT] = 0x0,
	[SPECIES_CINDERACE] = 0x0,
	[SPECIES_SOBBLE] = 0x0,
	[SPECIES_DRIZZILE] = 0x0,
	[SPECIES_INTELEON] = 0x0,
	[SPECIES_SKWOVET] = 0x0,
	[SPECIES_GREEDENT] = 0x0,
	[SPECIES_ROOKIDEE] = 0x0,
	[SPECIES_CORVISQUIRE] = 0x8,
	[SPECIES_CORVIKNIGHT] = 0x0,
	[SPECIES_BLIPBUG] = 0x0,
	[SPECIES_DOTTLER] = 0x0,
	[SPECIES_ORBEETLE] = 0x9,
	[SPECIES_NICKIT] = 0x0,
	[SPECIES_THIEVUL] = 0x0,
	[SPECIES_GOSSIFLEUR] = 0x0,
	[SPECIES_ELDEGOSS] = 0x0,
	[SPECIES_WOOLOO] = 0x0,
	[SPECIES_DUBWOOL] = 0x0,
	[SPECIES_CHEWTLE] = 0x0,
	[SPECIES_DREDNAW] = 0x0,
	[SPECIES_YAMPER] = 0x0,
	[SPECIES_BOLTUND] = 0x0,
	[SPECIES_ROLYCOLY] = 0x0,
	[SPECIES_CARKOL] = 0x0,
	[SPECIES_COALOSSAL] = 0x0,
	[SPECIES_APPLIN] = 0x0,
	[SPECIES_FLAPPLE] = 0xa,
	[SPECIES_APPLETUN] = 0x0,
	[SPECIES_SILICOBRA] = 0x0,
	[SPECIES_SANDACONDA] = 0x0,
	[SPECIES_CRAMORANT] = 0x0,
	[SPECIES_ARROKUDA] = 0xa,
	[SPECIES_BARRASKEWDA] = 0x6,
	[SPECIES_TOXEL] = 0x0,
	[SPECIES_TOXTRICITY] = 0x0,
	[SPECIES_SIZZLIPEDE] = 0x0,
	[SPECIES_CENTISKORCH] = 0x0,
	[SPECIES_CLOBBOPUS] = 0x0,
	[SPECIES_GRAPPLOCT] = 0x0,
	[SPECIES_SINISTEA] = 0xa,
	[SPECIES_POLTEAGEIST] = 0x7,
	[SPECIES_HATENNA] = 0x0,
	[SPECIES_HATTREM] = 0x0,
	[SPECIES_HATTERENE] = 0x0,
	[SPECIES_IMPIDIMP] = 0x0,
	[SPECIES_MORGREM] = 0x0,
	[SPECIES_GRIMMSNARL] = 0x0,
	[SPECIES_OBSTAGOON] = 0x0,
	[SPECIES_PERRSERKER] = 0x0,
	[SPECIES_CURSOLA] = 0x0,
	[SPECIES_SIRFETCHD] = 0x0,
	[SPECIES_MR_RIME] = 0x0,
	[SPECIES_RUNERIGUS] = 0x0,
	[SPECIES_MILCERY] = 0x0,
	[SPECIES_ALCREMIE_STRAWBERRY] = 0x0,
	[SPECIES_FALINKS] = 0x0,
	[SPECIES_PINCURCHIN] = 0x0,
	[SPECIES_SNOM] = 0x0,
	[SPECIES_FROSMOTH] = 0x9,
	[SPECIES_STONJOURNER] = 0x0,
	[SPECIES_EISCUE] = 0x0,
	[SPECIES_INDEEDEE] = 0x0,
	[SPECIES_MORPEKO] = 0x0,
	[SPECIES_CUFANT] = 0x0,
	[SPECIES_COPPERAJAH] = 0x0,
	[SPECIES_DRACOZOLT] = 0x0,
	[SPECIES_ARCTOZOLT] = 0x0,
	[SPECIES_DRACOVISH] = 0x0,
	[SPECIES_ARCTOVISH] = 0x0,
	[SPECIES_DURALUDON] = 0x0,
	[SPECIES_DREEPY] = 0x0,
	[SPECIES_DRAKLOAK] = 0x0,
	[SPECIES_DRAGAPULT] = 0x0,
	[SPECIES_ZACIAN] = 0x0,
	[SPECIES_ZAMAZENTA] = 0x0,
	[SPECIES_ETERNATUS] = 0x5,
	[SPECIES_KUBFU] = 0x0,
	[SPECIES_URSHIFU_SINGLE] = 0x0,
	[SPECIES_ZARUDE] = 0x0,
	[SPECIES_LUGIA_SHADOW] = 0x8,
	[SPECIES_CALYREX] = 0x0,
	[SPECIES_REGIELEKI] = 0x0,
	[SPECIES_REGIDRAGO] = 0x0,
	[SPECIES_CRAMORANT_GULPING] = 0x0,
	[SPECIES_CRAMORANT_GORGING] = 0x0,
	[SPECIES_TOXTRICITY_LOW_KEY] = 0x0,
	[SPECIES_SINISTEA_CHIPPED] = 0xa,
	[SPECIES_POLTEAGEIST_CHIPPED] = 0x7,
	[SPECIES_ALCREMIE_BERRY] = 0x0,
	[SPECIES_ALCREMIE_CLOVER] = 0x0,
	[SPECIES_ALCREMIE_FLOWER] = 0x0,
	[SPECIES_ALCREMIE_LOVE] = 0x0,
	[SPECIES_ALCREMIE_RIBBON] = 0x0,
	[SPECIES_ALCREMIE_STAR] = 0x0,
	[SPECIES_EISCUE_NOICE] = 0x0,
	[SPECIES_INDEEDEE_FEMALE] = 0x0,
	[SPECIES_MORPEKO_HANGRY] = 0x0,
	[SPECIES_ZACIAN_CROWNED] = 0x0,
	[SPECIES_ZAMAZENTA_CROWNED] = 0x0,
	[SPECIES_ETERNATUS_ETERNAMAX] = 0x0,
	[SPECIES_URSHIFU_RAPID] = 0x0,
	[SPECIES_MEOWTH_G] = 0x0,
	[SPECIES_PONYTA_G] = 0x0,
	[SPECIES_RAPIDASH_G] = 0x0,
	[SPECIES_SLOWPOKE_G] = 0x0,
	[SPECIES_SLOWBRO_G] = 0x0,
	[SPECIES_FARFETCHD_G] = 0x0,
	[SPECIES_WEEZING_G] = 0x6,
	[SPECIES_MR_MIME_G] = 0x0,
	[SPECIES_ARTICUNO_G] = 0x8,
	[SPECIES_ZAPDOS_G] = 0x0,
	[SPECIES_MOLTRES_G] = 0x0,
	[SPECIES_SLOWKING_G] = 0x0,
	[SPECIES_CORSOLA_G] = 0x0,
	[SPECIES_ZIGZAGOON_G] = 0x0,
	[SPECIES_LINOONE_G] = 0x0,
	[SPECIES_DARUMAKA_G] = 0x0,
	[SPECIES_DARMANITAN_G] = 0x0,
	[SPECIES_DARMANITAN_G_ZEN] = 0x0,
	[SPECIES_YAMASK_G] = 0x0,
	[SPECIES_STUNFISK_G] = 0x0,
	[SPECIES_VENUSAUR_GIGA] = 0x0,
	[SPECIES_CHARIZARD_GIGA] = 0x0,
	[SPECIES_BLASTOISE_GIGA] = 0x0,
	[SPECIES_BUTTERFREE_GIGA] = 0x8,
	[SPECIES_PIKACHU_GIGA] = 0x0,
	[SPECIES_MEOWTH_GIGA] = 0x0,
	[SPECIES_MACHAMP_GIGA] = 0x0,
	[SPECIES_GENGAR_GIGA] = 0x0,
	[SPECIES_KINGLER_GIGA] = 0x0,
	[SPECIES_LAPRAS_GIGA] = 0x0,
	[SPECIES_EEVEE_GIGA] = 0x0,
	[SPECIES_SNORLAX_GIGA] = 0x0,
	[SPECIES_GARBODOR_GIGA] = 0x0,
	[SPECIES_MELMETAL_GIGA] = 0x0,
	[SPECIES_RILLABOOM_GIGA] = 0x0,
	[SPECIES_CINDERACE_GIGA] = 0x0,
	[SPECIES_INTELEON_GIGA] = 0x0,
	[SPECIES_CORVIKNIGHT_GIGA] = 0x0,
	[SPECIES_ORBEETLE_GIGA] = 0x7,
	[SPECIES_DREDNAW_GIGA] = 0x0,
	[SPECIES_COALOSSAL_GIGA] = 0x0,
	[SPECIES_FLAPPLE_GIGA] = 0x0,
	[SPECIES_APPLETUN_GIGA] = 0x0,
	[SPECIES_SANDACONDA_GIGA] = 0x7,
	[SPECIES_TOXTRICITY_GIGA] = 0x0,
	[SPECIES_TOXTRICITY_LOW_KEY_GIGA] = 0x0,
	[SPECIES_CENTISKORCH_GIGA] = 0x0,
	[SPECIES_HATTERENE_GIGA] = 0x0,
	[SPECIES_GRIMMSNARL_GIGA] = 0x0,
	[SPECIES_ALCREMIE_GIGA] = 0x0,
	[SPECIES_COPPERAJAH_GIGA] = 0x0,
	[SPECIES_DURALUDON_GIGA] = 0x0,
	[SPECIES_URSHIFU_SINGLE_GIGA] = 0x0,
	[SPECIES_URSHIFU_RAPID_GIGA] = 0x0,
	[SPECIES_GLASTRIER] = 0x0,
	[SPECIES_SPECTRIER] = 0x0,
	[SPECIES_CALYREX_ICE] = 0x0,
	[SPECIES_CALYREX_GHOST] = 0x0,
	[SPECIES_BEEDRILL_S] = 0x8,
	[SPECIES_EPEP] = 0x0,
	[SPECIES_SANDSHREW_S] = 0x0,
	[SPECIES_SANDSLASH_S] = 0x0,
	[SPECIES_CLOCKOG] = 0x0,
	[SPECIES_ZUBAT_S] = 0x8,
	[SPECIES_GOLBAT_S] = 0x8,
	[SPECIES_CROBAT_S] = 0xc,
	[SPECIES_CEBULACK] = 0x0,
	[SPECIES_CEBULBA] = 0x0,
	[SPECIES_CEBOGRE] = 0x0,
	[SPECIES_TUCAM] = 0x9,
	[SPECIES_PARASECT_S] = 0x0,
	[SPECIES_BUDOC] = 0x0,
	[SPECIES_DEMOLETT] = 0xb,
	[SPECIES_SHARIK] = 0x0,
	[SPECIES_SHARKADE] = 0x0,
	[SPECIES_SHARKANO] = 0x0,
	[SPECIES_AXEW_S] = 0x0,
	[SPECIES_FRAXURE_S] = 0x0,
	[SPECIES_HAXORUS_S] = 0x0,
	[SPECIES_GEODUDE_S] = 0x0,
	[SPECIES_GRAVELER_S] = 0x0,
	[SPECIES_GOLEM_S] = 0x0,
	[SPECIES_DODUO_S] = 0x0,
	[SPECIES_DODRIO_S] = 0x0,
	[SPECIES_FARPUSSD] = 0x0,
	[SPECIES_FARAWAYD] = 0x0,
	[SPECIES_FARQUAAD] = 0x0,
	[SPECIES_GRIMER_S] = 0x0,
	[SPECIES_MUK_S] = 0x0,
	[SPECIES_GASTLY_S] = 0x6,
	[SPECIES_HAUNTER_S] = 0x4,
	[SPECIES_GENGAR_S] = 0x0,
	[SPECIES_VOLTORB_S] = 0xa,
	[SPECIES_ELECTRODE_S] = 0xc,
	[SPECIES_KOFFING_S] = 0x8,
	[SPECIES_WEEZING_S] = 0x8,
	[SPECIES_MOLEKID] = 0x0,
	[SPECIES_MOLEBULK] = 0x0,
	[SPECIES_KANGASKHAN_S] = 0x0,
	[SPECIES_SCYTHER_S] = 0x0,
	[SPECIES_PINSIR_S] = 0x0,
	[SPECIES_HERACROSS_S] = 0x0,
	[SPECIES_MAGBY_S] = 0x0,
	[SPECIES_MAGMAR_S] = 0x0,
	[SPECIES_MAGMORTAR_S] = 0x0,
	[SPECIES_KOMALA_S] = 0x0,
	[SPECIES_SNORLAX_S] = 0x0,
	[SPECIES_NAH] = 0x0,
	[SPECIES_RABBLIT] = 0x0,
	[SPECIES_PYROSE] = 0x0,
	[SPECIES_DOYEBUNNY] = 0x0,
	[SPECIES_MARACTUS_S] = 0x9,
	[SPECIES_WYRDEER] = 0x0,
	[SPECIES_BASCULEGION] = 0x0,
	[SPECIES_KLEAVOR] = 0x0,
	[SPECIES_GROWLITHE_H] = 0x0,
	[SPECIES_BRAVIARY_H] = 0x0,
	[SPECIES_ZORUA_H] = 0x0,
	[SPECIES_ZOROARK_H] = 0x0,
};

