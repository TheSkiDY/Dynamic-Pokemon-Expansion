#include "defines.h"
#include "../include/graphics.h"

const struct MonCoords gMonFrontPicCoords[NUM_SPECIES] =
{
	[SPECIES_NONE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_BULBASAUR] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_IVYSAUR] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_VENUSAUR] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_CHARMANDER] =
	{
		.size = 0x55,
		.y_offset = 0xb,
	},
	[SPECIES_CHARMELEON] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_CHARIZARD] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SQUIRTLE] =
	{
		.size = 0x65,
		.y_offset = 0xc,
	},
	[SPECIES_WARTORTLE] =
	{
		.size = 0x76,
		.y_offset = 0x7,
	},
	[SPECIES_BLASTOISE] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_CATERPIE] =
	{
		.size = 0x54,
		.y_offset = 0xc,
	},
	[SPECIES_METAPOD] =
	{
		.size = 0x54,
		.y_offset = 0xe,
	},
	[SPECIES_BUTTERFREE] =
	{
		.size = 0x76,
		.y_offset = 0xa,
	},
	[SPECIES_WEEDLE] =
	{
		.size = 0x54,
		.y_offset = 0xd,
	},
	[SPECIES_KAKUNA] =
	{
		.size = 0x45,
		.y_offset = 0xb,
	},
	[SPECIES_BEEDRILL] =
	{
		.size = 0x86,
		.y_offset = 0x5,
	},
	[SPECIES_PIDGEY] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_PIDGEOTTO] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_PIDGEOT] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_RATTATA] =
	{
		.size = 0x65,
		.y_offset = 0xd,
	},
	[SPECIES_RATICATE] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_SPEAROW] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_FEAROW] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_EKANS] =
	{
		.size = 0x65,
		.y_offset = 0xc,
	},
	[SPECIES_ARBOK] =
	{
		.size = 0x78,
		.y_offset = 0x2,
	},
	[SPECIES_PIKACHU] =
	{
		.size = 0x67,
		.y_offset = 0x8,
	},
	[SPECIES_RAICHU] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_SANDSHREW] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_SANDSLASH] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_NIDORAN_F] =
	{
		.size = 0x54,
		.y_offset = 0xd,
	},
	[SPECIES_NIDORINA] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_NIDOQUEEN] =
	{
		.size = 0x78,
		.y_offset = 0x2,
	},
	[SPECIES_NIDORAN_M] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_NIDORINO] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_NIDOKING] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CLEFAIRY] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_CLEFABLE] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_VULPIX] =
	{
		.size = 0x65,
		.y_offset = 0xb,
	},
	[SPECIES_NINETALES] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_JIGGLYPUFF] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_WIGGLYTUFF] =
	{
		.size = 0x67,
		.y_offset = 0x4,
	},
	[SPECIES_ZUBAT] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_GOLBAT] =
	{
		.size = 0x88,
		.y_offset = 0x7,
	},
	[SPECIES_ODDISH] =
	{
		.size = 0x45,
		.y_offset = 0xe,
	},
	[SPECIES_GLOOM] =
	{
		.size = 0x66,
		.y_offset = 0xc,
	},
	[SPECIES_VILEPLUME] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_PARAS] =
	{
		.size = 0x64,
		.y_offset = 0xc,
	},
	[SPECIES_PARASECT] =
	{
		.size = 0x86,
		.y_offset = 0x7,
	},
	[SPECIES_VENONAT] =
	{
		.size = 0x57,
		.y_offset = 0x8,
	},
	[SPECIES_VENOMOTH] =
	{
		.size = 0x87,
		.y_offset = 0x9,
	},
	[SPECIES_DIGLETT] =
	{
		.size = 0x54,
		.y_offset = 0x11,
	},
	[SPECIES_DUGTRIO] =
	{
		.size = 0x75,
		.y_offset = 0xb,
	},
	[SPECIES_MEOWTH] =
	{
		.size = 0x55,
		.y_offset = 0xa,
	},
	[SPECIES_PERSIAN] =
	{
		.size = 0x76,
		.y_offset = 0x4,
	},
	[SPECIES_PSYDUCK] =
	{
		.size = 0x56,
		.y_offset = 0xb,
	},
	[SPECIES_GOLDUCK] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_MANKEY] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_PRIMEAPE] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_GROWLITHE] =
	{
		.size = 0x65,
		.y_offset = 0xb,
	},
	[SPECIES_ARCANINE] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_POLIWAG] =
	{
		.size = 0x74,
		.y_offset = 0xe,
	},
	[SPECIES_POLIWHIRL] =
	{
		.size = 0x76,
		.y_offset = 0x9,
	},
	[SPECIES_POLIWRATH] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_ABRA] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_KADABRA] =
	{
		.size = 0x87,
		.y_offset = 0x5,
	},
	[SPECIES_ALAKAZAM] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_MACHOP] =
	{
		.size = 0x46,
		.y_offset = 0x5,
	},
	[SPECIES_MACHOKE] =
	{
		.size = 0x77,
		.y_offset = 0x4,
	},
	[SPECIES_MACHAMP] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_BELLSPROUT] =
	{
		.size = 0x66,
		.y_offset = 0xc,
	},
	[SPECIES_WEEPINBELL] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_VICTREEBEL] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_TENTACOOL] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_TENTACRUEL] =
	{
		.size = 0x78,
		.y_offset = 0x4,
	},
	[SPECIES_GEODUDE] =
	{
		.size = 0x74,
		.y_offset = 0x13,
	},
	[SPECIES_GRAVELER] =
	{
		.size = 0x86,
		.y_offset = 0x8,
	},
	[SPECIES_GOLEM] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_PONYTA] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_RAPIDASH] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SLOWPOKE] =
	{
		.size = 0x65,
		.y_offset = 0x10,
	},
	[SPECIES_SLOWBRO] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_MAGNEMITE] =
	{
		.size = 0x53,
		.y_offset = 0x14,
	},
	[SPECIES_MAGNETON] =
	{
		.size = 0x75,
		.y_offset = 0x7,
	},
	[SPECIES_FARFETCHD] =
	{
		.size = 0x76,
		.y_offset = 0x7,
	},
	[SPECIES_DODUO] =
	{
		.size = 0x67,
		.y_offset = 0x7,
	},
	[SPECIES_DODRIO] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SEEL] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_DEWGONG] =
	{
		.size = 0x87,
		.y_offset = 0x2,
	},
	[SPECIES_GRIMER] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_MUK] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_SHELLDER] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_CLOYSTER] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_GASTLY] =
	{
		.size = 0x77,
		.y_offset = 0xd,
	},
	[SPECIES_HAUNTER] =
	{
		.size = 0x87,
		.y_offset = 0xd,
	},
	[SPECIES_GENGAR] =
	{
		.size = 0x76,
		.y_offset = 0x7,
	},
	[SPECIES_ONIX] =
	{
		.size = 0x78,
		.y_offset = 0x3,
	},
	[SPECIES_DROWZEE] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_HYPNO] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_KRABBY] =
	{
		.size = 0x75,
		.y_offset = 0xe,
	},
	[SPECIES_KINGLER] =
	{
		.size = 0x87,
		.y_offset = 0x9,
	},
	[SPECIES_VOLTORB] =
	{
		.size = 0x44,
		.y_offset = 0x11,
	},
	[SPECIES_ELECTRODE] =
	{
		.size = 0x55,
		.y_offset = 0xb,
	},
	[SPECIES_EXEGGCUTE] =
	{
		.size = 0x76,
		.y_offset = 0xc,
	},
	[SPECIES_EXEGGUTOR] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CUBONE] =
	{
		.size = 0x65,
		.y_offset = 0xd,
	},
	[SPECIES_MAROWAK] =
	{
		.size = 0x87,
		.y_offset = 0x8,
	},
	[SPECIES_HITMONLEE] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_HITMONCHAN] =
	{
		.size = 0x67,
		.y_offset = 0x3,
	},
	[SPECIES_LICKITUNG] =
	{
		.size = 0x86,
		.y_offset = 0x7,
	},
	[SPECIES_KOFFING] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_WEEZING] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_RHYHORN] =
	{
		.size = 0x76,
		.y_offset = 0xc,
	},
	[SPECIES_RHYDON] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_CHANSEY] =
	{
		.size = 0x76,
		.y_offset = 0x9,
	},
	[SPECIES_TANGELA] =
	{
		.size = 0x66,
		.y_offset = 0xc,
	},
	[SPECIES_KANGASKHAN] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_HORSEA] =
	{
		.size = 0x45,
		.y_offset = 0xe,
	},
	[SPECIES_SEADRA] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_GOLDEEN] =
	{
		.size = 0x66,
		.y_offset = 0xd,
	},
	[SPECIES_SEAKING] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_STARYU] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_STARMIE] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_MR_MIME] =
	{
		.size = 0x76,
		.y_offset = 0x7,
	},
	[SPECIES_SCYTHER] =
	{
		.size = 0x78,
		.y_offset = 0x2,
	},
	[SPECIES_JYNX] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_ELECTABUZZ] =
	{
		.size = 0x88,
		.y_offset = 0x4,
	},
	[SPECIES_MAGMAR] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_PINSIR] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_TAUROS] =
	{
		.size = 0x88,
		.y_offset = 0x5,
	},
	[SPECIES_MAGIKARP] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_GYARADOS] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_LAPRAS] =
	{
		.size = 0x87,
		.y_offset = 0x2,
	},
	[SPECIES_DITTO] =
	{
		.size = 0x54,
		.y_offset = 0x10,
	},
	[SPECIES_EEVEE] =
	{
		.size = 0x56,
		.y_offset = 0xb,
	},
	[SPECIES_VAPOREON] =
	{
		.size = 0x67,
		.y_offset = 0x9,
	},
	[SPECIES_JOLTEON] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_FLAREON] =
	{
		.size = 0x76,
		.y_offset = 0xb,
	},
	[SPECIES_PORYGON] =
	{
		.size = 0x56,
		.y_offset = 0xf,
	},
	[SPECIES_OMANYTE] =
	{
		.size = 0x45,
		.y_offset = 0xe,
	},
	[SPECIES_OMASTAR] =
	{
		.size = 0x67,
		.y_offset = 0x9,
	},
	[SPECIES_KABUTO] =
	{
		.size = 0x54,
		.y_offset = 0x12,
	},
	[SPECIES_KABUTOPS] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_AERODACTYL] =
	{
		.size = 0x88,
		.y_offset = 0x4,
	},
	[SPECIES_SNORLAX] =
	{
		.size = 0x87,
		.y_offset = 0x2,
	},
	[SPECIES_ARTICUNO] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_ZAPDOS] =
	{
		.size = 0x88,
		.y_offset = 0x4,
	},
	[SPECIES_MOLTRES] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_DRATINI] =
	{
		.size = 0x75,
		.y_offset = 0xb,
	},
	[SPECIES_DRAGONAIR] =
	{
		.size = 0x87,
		.y_offset = 0x1,
	},
	[SPECIES_DRAGONITE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_MEWTWO] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_MEW] =
	{
		.size = 0x77,
		.y_offset = 0x9,
	},
	[SPECIES_CHIKORITA] =
	{
		.size = 0x75,
		.y_offset = 0xa,
	},
	[SPECIES_BAYLEEF] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_MEGANIUM] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CYNDAQUIL] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_QUILAVA] =
	{
		.size = 0x76,
		.y_offset = 0x9,
	},
	[SPECIES_TYPHLOSION] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_TOTODILE] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_CROCONAW] =
	{
		.size = 0x67,
		.y_offset = 0x5,
	},
	[SPECIES_FERALIGATR] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_SENTRET] =
	{
		.size = 0x47,
		.y_offset = 0x2,
	},
	[SPECIES_FURRET] =
	{
		.size = 0x67,
		.y_offset = 0x4,
	},
	[SPECIES_HOOTHOOT] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_NOCTOWL] =
	{
		.size = 0x58,
		.y_offset = 0x2,
	},
	[SPECIES_LEDYBA] =
	{
		.size = 0x56,
		.y_offset = 0x9,
	},
	[SPECIES_LEDIAN] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_SPINARAK] =
	{
		.size = 0x54,
		.y_offset = 0x12,
	},
	[SPECIES_ARIADOS] =
	{
		.size = 0x87,
		.y_offset = 0x8,
	},
	[SPECIES_CROBAT] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[SPECIES_CHINCHOU] =
	{
		.size = 0x75,
		.y_offset = 0xc,
	},
	[SPECIES_LANTURN] =
	{
		.size = 0x87,
		.y_offset = 0xb,
	},
	[SPECIES_PICHU] =
	{
		.size = 0x45,
		.y_offset = 0xe,
	},
	[SPECIES_CLEFFA] =
	{
		.size = 0x44,
		.y_offset = 0x13,
	},
	[SPECIES_IGGLYBUFF] =
	{
		.size = 0x44,
		.y_offset = 0x11,
	},
	[SPECIES_TOGEPI] =
	{
		.size = 0x34,
		.y_offset = 0x11,
	},
	[SPECIES_TOGETIC] =
	{
		.size = 0x46,
		.y_offset = 0x8,
	},
	[SPECIES_NATU] =
	{
		.size = 0x44,
		.y_offset = 0xe,
	},
	[SPECIES_XATU] =
	{
		.size = 0x47,
		.y_offset = 0x0,
	},
	[SPECIES_MAREEP] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_FLAAFFY] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_AMPHAROS] =
	{
		.size = 0x77,
		.y_offset = 0x2,
	},
	[SPECIES_BELLOSSOM] =
	{
		.size = 0x45,
		.y_offset = 0xd,
	},
	[SPECIES_MARILL] =
	{
		.size = 0x65,
		.y_offset = 0xe,
	},
	[SPECIES_AZUMARILL] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_SUDOWOODO] =
	{
		.size = 0x67,
		.y_offset = 0x7,
	},
	[SPECIES_POLITOED] =
	{
		.size = 0x67,
		.y_offset = 0x5,
	},
	[SPECIES_HOPPIP] =
	{
		.size = 0x66,
		.y_offset = 0xe,
	},
	[SPECIES_SKIPLOOM] =
	{
		.size = 0x55,
		.y_offset = 0x11,
	},
	[SPECIES_JUMPLUFF] =
	{
		.size = 0x77,
		.y_offset = 0x9,
	},
	[SPECIES_AIPOM] =
	{
		.size = 0x58,
		.y_offset = 0x1,
	},
	[SPECIES_SUNKERN] =
	{
		.size = 0x44,
		.y_offset = 0x11,
	},
	[SPECIES_SUNFLORA] =
	{
		.size = 0x56,
		.y_offset = 0x8,
	},
	[SPECIES_YANMA] =
	{
		.size = 0x86,
		.y_offset = 0xe,
	},
	[SPECIES_WOOPER] =
	{
		.size = 0x54,
		.y_offset = 0x11,
	},
	[SPECIES_QUAGSIRE] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_ESPEON] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_UMBREON] =
	{
		.size = 0x67,
		.y_offset = 0x9,
	},
	[SPECIES_MURKROW] =
	{
		.size = 0x66,
		.y_offset = 0x10,
	},
	[SPECIES_SLOWKING] =
	{
		.size = 0x58,
		.y_offset = 0x0,
	},
	[SPECIES_MISDREAVUS] =
	{
		.size = 0x55,
		.y_offset = 0xd,
	},
	[SPECIES_UNOWN] =
	{
		.size = 0x35,
		.y_offset = 0xf,
	},
	[SPECIES_WOBBUFFET] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_GIRAFARIG] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_PINECO] =
	{
		.size = 0x56,
		.y_offset = 0xc,
	},
	[SPECIES_FORRETRESS] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_DUNSPARCE] =
	{
		.size = 0x74,
		.y_offset = 0x9,
	},
	[SPECIES_GLIGAR] =
	{
		.size = 0x78,
		.y_offset = 0x4,
	},
	[SPECIES_STEELIX] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SNUBBULL] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_GRANBULL] =
	{
		.size = 0x57,
		.y_offset = 0x4,
	},
	[SPECIES_QWILFISH] =
	{
		.size = 0x56,
		.y_offset = 0x8,
	},
	[SPECIES_SCIZOR] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_SHUCKLE] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_HERACROSS] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_SNEASEL] =
	{
		.size = 0x67,
		.y_offset = 0x8,
	},
	[SPECIES_TEDDIURSA] =
	{
		.size = 0x46,
		.y_offset = 0xc,
	},
	[SPECIES_URSARING] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_SLUGMA] =
	{
		.size = 0x45,
		.y_offset = 0xc,
	},
	[SPECIES_MAGCARGO] =
	{
		.size = 0x57,
		.y_offset = 0x6,
	},
	[SPECIES_SWINUB] =
	{
		.size = 0x43,
		.y_offset = 0x14,
	},
	[SPECIES_PILOSWINE] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_CORSOLA] =
	{
		.size = 0x65,
		.y_offset = 0xc,
	},
	[SPECIES_REMORAID] =
	{
		.size = 0x55,
		.y_offset = 0xb,
	},
	[SPECIES_OCTILLERY] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_DELIBIRD] =
	{
		.size = 0x56,
		.y_offset = 0x7,
	},
	[SPECIES_MANTINE] =
	{
		.size = 0x88,
		.y_offset = 0xa,
	},
	[SPECIES_SKARMORY] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_HOUNDOUR] =
	{
		.size = 0x56,
		.y_offset = 0x9,
	},
	[SPECIES_HOUNDOOM] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_KINGDRA] =
	{
		.size = 0x78,
		.y_offset = 0x1,
	},
	[SPECIES_PHANPY] =
	{
		.size = 0x54,
		.y_offset = 0x10,
	},
	[SPECIES_DONPHAN] =
	{
		.size = 0x86,
		.y_offset = 0x9,
	},
	[SPECIES_PORYGON2] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_STANTLER] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SMEARGLE] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_TYROGUE] =
	{
		.size = 0x46,
		.y_offset = 0x9,
	},
	[SPECIES_HITMONTOP] =
	{
		.size = 0x67,
		.y_offset = 0x7,
	},
	[SPECIES_SMOOCHUM] =
	{
		.size = 0x35,
		.y_offset = 0xe,
	},
	[SPECIES_ELEKID] =
	{
		.size = 0x76,
		.y_offset = 0xc,
	},
	[SPECIES_MAGBY] =
	{
		.size = 0x45,
		.y_offset = 0xc,
	},
	[SPECIES_MILTANK] =
	{
		.size = 0x77,
		.y_offset = 0x8,
	},
	[SPECIES_BLISSEY] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_RAIKOU] =
	{
		.size = 0x88,
		.y_offset = 0x5,
	},
	[SPECIES_ENTEI] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_SUICUNE] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_LARVITAR] =
	{
		.size = 0x46,
		.y_offset = 0xa,
	},
	[SPECIES_PUPITAR] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_TYRANITAR] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_LUGIA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_HO_OH] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CELEBI] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_MANAPHY_EGG] =
	{
		.size = 0x88,
		.y_offset = 0x10,
	},
	[SPECIES_MISSINGNO] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[254] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[255] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[256] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[257] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[258] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[259] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[260] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[261] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[262] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[263] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[264] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[265] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[266] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[267] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[268] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[269] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[270] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[271] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[272] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[273] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[274] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[275] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[276] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[SPECIES_TREECKO] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_GROVYLE] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_SCEPTILE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_TORCHIC] =
	{
		.size = 0x56,
		.y_offset = 0xb,
	},
	[SPECIES_COMBUSKEN] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_BLAZIKEN] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_MUDKIP] =
	{
		.size = 0x56,
		.y_offset = 0xb,
	},
	[SPECIES_MARSHTOMP] =
	{
		.size = 0x67,
		.y_offset = 0x5,
	},
	[SPECIES_SWAMPERT] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[SPECIES_POOCHYENA] =
	{
		.size = 0x55,
		.y_offset = 0xb,
	},
	[SPECIES_MIGHTYENA] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_ZIGZAGOON] =
	{
		.size = 0x85,
		.y_offset = 0xd,
	},
	[SPECIES_LINOONE] =
	{
		.size = 0x78,
		.y_offset = 0x3,
	},
	[SPECIES_WURMPLE] =
	{
		.size = 0x45,
		.y_offset = 0xc,
	},
	[SPECIES_SILCOON] =
	{
		.size = 0x75,
		.y_offset = 0xb,
	},
	[SPECIES_BEAUTIFLY] =
	{
		.size = 0x86,
		.y_offset = 0x9,
	},
	[SPECIES_CASCOON] =
	{
		.size = 0x74,
		.y_offset = 0xb,
	},
	[SPECIES_DUSTOX] =
	{
		.size = 0x86,
		.y_offset = 0xb,
	},
	[SPECIES_LOTAD] =
	{
		.size = 0x65,
		.y_offset = 0xf,
	},
	[SPECIES_LOMBRE] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_LUDICOLO] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SEEDOT] =
	{
		.size = 0x46,
		.y_offset = 0xd,
	},
	[SPECIES_NUZLEAF] =
	{
		.size = 0x56,
		.y_offset = 0x6,
	},
	[SPECIES_SHIFTRY] =
	{
		.size = 0x88,
		.y_offset = 0x7,
	},
	[SPECIES_NINCADA] =
	{
		.size = 0x74,
		.y_offset = 0x12,
	},
	[SPECIES_NINJASK] =
	{
		.size = 0x86,
		.y_offset = 0x9,
	},
	[SPECIES_SHEDINJA] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_TAILLOW] =
	{
		.size = 0x64,
		.y_offset = 0xc,
	},
	[SPECIES_SWELLOW] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_SHROOMISH] =
	{
		.size = 0x54,
		.y_offset = 0xf,
	},
	[SPECIES_BRELOOM] =
	{
		.size = 0x77,
		.y_offset = 0x1,
	},
	[SPECIES_SPINDA] =
	{
		.size = 0x67,
		.y_offset = 0x7,
	},
	[SPECIES_WINGULL] =
	{
		.size = 0x84,
		.y_offset = 0xb,
	},
	[SPECIES_PELIPPER] =
	{
		.size = 0x77,
		.y_offset = 0x2,
	},
	[SPECIES_SURSKIT] =
	{
		.size = 0x65,
		.y_offset = 0x8,
	},
	[SPECIES_MASQUERAIN] =
	{
		.size = 0x88,
		.y_offset = 0x4,
	},
	[SPECIES_WAILMER] =
	{
		.size = 0x75,
		.y_offset = 0xb,
	},
	[SPECIES_WAILORD] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_SKITTY] =
	{
		.size = 0x66,
		.y_offset = 0xc,
	},
	[SPECIES_DELCATTY] =
	{
		.size = 0x66,
		.y_offset = 0x4,
	},
	[SPECIES_KECLEON] =
	{
		.size = 0x67,
		.y_offset = 0x5,
	},
	[SPECIES_BALTOY] =
	{
		.size = 0x55,
		.y_offset = 0xd,
	},
	[SPECIES_CLAYDOL] =
	{
		.size = 0x78,
		.y_offset = 0x3,
	},
	[SPECIES_NOSEPASS] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_TORKOAL] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_SABLEYE] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_BARBOACH] =
	{
		.size = 0x46,
		.y_offset = 0x12,
	},
	[SPECIES_WHISCASH] =
	{
		.size = 0x76,
		.y_offset = 0x9,
	},
	[SPECIES_LUVDISC] =
	{
		.size = 0x46,
		.y_offset = 0x10,
	},
	[SPECIES_CORPHISH] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_CRAWDAUNT] =
	{
		.size = 0x88,
		.y_offset = 0x4,
	},
	[SPECIES_FEEBAS] =
	{
		.size = 0x46,
		.y_offset = 0xa,
	},
	[SPECIES_MILOTIC] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_CARVANHA] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_SHARPEDO] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_TRAPINCH] =
	{
		.size = 0x54,
		.y_offset = 0xd,
	},
	[SPECIES_VIBRAVA] =
	{
		.size = 0x86,
		.y_offset = 0xa,
	},
	[SPECIES_FLYGON] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_MAKUHITA] =
	{
		.size = 0x65,
		.y_offset = 0x8,
	},
	[SPECIES_HARIYAMA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_ELECTRIKE] =
	{
		.size = 0x64,
		.y_offset = 0xe,
	},
	[SPECIES_MANECTRIC] =
	{
		.size = 0x67,
		.y_offset = 0x2,
	},
	[SPECIES_NUMEL] =
	{
		.size = 0x65,
		.y_offset = 0xb,
	},
	[SPECIES_CAMERUPT] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_SPHEAL] =
	{
		.size = 0x65,
		.y_offset = 0xe,
	},
	[SPECIES_SEALEO] =
	{
		.size = 0x86,
		.y_offset = 0xa,
	},
	[SPECIES_WALREIN] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_CACNEA] =
	{
		.size = 0x74,
		.y_offset = 0xf,
	},
	[SPECIES_CACTURNE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SNORUNT] =
	{
		.size = 0x56,
		.y_offset = 0xd,
	},
	[SPECIES_GLALIE] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_LUNATONE] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_SOLROCK] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_AZURILL] =
	{
		.size = 0x55,
		.y_offset = 0xd,
	},
	[SPECIES_SPOINK] =
	{
		.size = 0x46,
		.y_offset = 0x9,
	},
	[SPECIES_GRUMPIG] =
	{
		.size = 0x77,
		.y_offset = 0x2,
	},
	[SPECIES_PLUSLE] =
	{
		.size = 0x56,
		.y_offset = 0xb,
	},
	[SPECIES_MINUN] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_MAWILE] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_MEDITITE] =
	{
		.size = 0x65,
		.y_offset = 0xb,
	},
	[SPECIES_MEDICHAM] =
	{
		.size = 0x68,
		.y_offset = 0x0,
	},
	[SPECIES_SWABLU] =
	{
		.size = 0x76,
		.y_offset = 0x10,
	},
	[SPECIES_ALTARIA] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_WYNAUT] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_DUSKULL] =
	{
		.size = 0x66,
		.y_offset = 0xc,
	},
	[SPECIES_DUSCLOPS] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_ROSELIA] =
	{
		.size = 0x76,
		.y_offset = 0xa,
	},
	[SPECIES_SLAKOTH] =
	{
		.size = 0x74,
		.y_offset = 0x11,
	},
	[SPECIES_VIGOROTH] =
	{
		.size = 0x78,
		.y_offset = 0x7,
	},
	[SPECIES_SLAKING] =
	{
		.size = 0x86,
		.y_offset = 0x7,
	},
	[SPECIES_GULPIN] =
	{
		.size = 0x55,
		.y_offset = 0xf,
	},
	[SPECIES_SWALOT] =
	{
		.size = 0x66,
		.y_offset = 0x5,
	},
	[SPECIES_TROPIUS] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_WHISMUR] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_LOUDRED] =
	{
		.size = 0x78,
		.y_offset = 0x3,
	},
	[SPECIES_EXPLOUD] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CLAMPERL] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_HUNTAIL] =
	{
		.size = 0x78,
		.y_offset = 0x2,
	},
	[SPECIES_GOREBYSS] =
	{
		.size = 0x86,
		.y_offset = 0x3,
	},
	[SPECIES_ABSOL] =
	{
		.size = 0x68,
		.y_offset = 0x2,
	},
	[SPECIES_SHUPPET] =
	{
		.size = 0x56,
		.y_offset = 0xe,
	},
	[SPECIES_BANETTE] =
	{
		.size = 0x55,
		.y_offset = 0x7,
	},
	[SPECIES_SEVIPER] =
	{
		.size = 0x77,
		.y_offset = 0x7,
	},
	[SPECIES_ZANGOOSE] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_RELICANTH] =
	{
		.size = 0x77,
		.y_offset = 0x9,
	},
	[SPECIES_ARON] =
	{
		.size = 0x43,
		.y_offset = 0xf,
	},
	[SPECIES_LAIRON] =
	{
		.size = 0x75,
		.y_offset = 0x8,
	},
	[SPECIES_AGGRON] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CASTFORM] =
	{
		.size = 0x34,
		.y_offset = 0x11,
	},
	[SPECIES_VOLBEAT] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_ILLUMISE] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_LILEEP] =
	{
		.size = 0x67,
		.y_offset = 0x7,
	},
	[SPECIES_CRADILY] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_ANORITH] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_ARMALDO] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_RALTS] =
	{
		.size = 0x35,
		.y_offset = 0xc,
	},
	[SPECIES_KIRLIA] =
	{
		.size = 0x47,
		.y_offset = 0x6,
	},
	[SPECIES_GARDEVOIR] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_BAGON] =
	{
		.size = 0x56,
		.y_offset = 0x9,
	},
	[SPECIES_SHELGON] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_SALAMENCE] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_BELDUM] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_METANG] =
	{
		.size = 0x87,
		.y_offset = 0x8,
	},
	[SPECIES_METAGROSS] =
	{
		.size = 0x87,
		.y_offset = 0xa,
	},
	[SPECIES_REGIROCK] =
	{
		.size = 0x78,
		.y_offset = 0x3,
	},
	[SPECIES_REGICE] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_REGISTEEL] =
	{
		.size = 0x88,
		.y_offset = 0x5,
	},
	[SPECIES_KYOGRE] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_GROUDON] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_RAYQUAZA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_LATIAS] =
	{
		.size = 0x88,
		.y_offset = 0x8,
	},
	[SPECIES_LATIOS] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_JIRACHI] =
	{
		.size = 0x66,
		.y_offset = 0xd,
	},
	[SPECIES_DEOXYS] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CHIMECHO] =
	{
		.size = 0x37,
		.y_offset = 0xb,
	},
	[SPECIES_EGG] =
	{
		.size = 0x33,
		.y_offset = 0x11,
	},
	[SPECIES_UNOWN_B] =
	{
		.size = 0x34,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_C] =
	{
		.size = 0x44,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_D] =
	{
		.size = 0x44,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_E] =
	{
		.size = 0x44,
		.y_offset = 0x11,
	},
	[SPECIES_UNOWN_F] =
	{
		.size = 0x44,
		.y_offset = 0x11,
	},
	[SPECIES_UNOWN_G] =
	{
		.size = 0x35,
		.y_offset = 0xe,
	},
	[SPECIES_UNOWN_H] =
	{
		.size = 0x44,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_I] =
	{
		.size = 0x34,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_J] =
	{
		.size = 0x34,
		.y_offset = 0x11,
	},
	[SPECIES_UNOWN_K] =
	{
		.size = 0x44,
		.y_offset = 0x11,
	},
	[SPECIES_UNOWN_L] =
	{
		.size = 0x34,
		.y_offset = 0x13,
	},
	[SPECIES_UNOWN_M] =
	{
		.size = 0x44,
		.y_offset = 0x13,
	},
	[SPECIES_UNOWN_N] =
	{
		.size = 0x43,
		.y_offset = 0x14,
	},
	[SPECIES_UNOWN_O] =
	{
		.size = 0x44,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_P] =
	{
		.size = 0x34,
		.y_offset = 0x13,
	},
	[SPECIES_UNOWN_Q] =
	{
		.size = 0x43,
		.y_offset = 0x15,
	},
	[SPECIES_UNOWN_R] =
	{
		.size = 0x34,
		.y_offset = 0x13,
	},
	[SPECIES_UNOWN_S] =
	{
		.size = 0x45,
		.y_offset = 0xc,
	},
	[SPECIES_UNOWN_T] =
	{
		.size = 0x34,
		.y_offset = 0x12,
	},
	[SPECIES_UNOWN_U] =
	{
		.size = 0x44,
		.y_offset = 0x12,
	},
	[SPECIES_UNOWN_V] =
	{
		.size = 0x44,
		.y_offset = 0x12,
	},
	[SPECIES_UNOWN_W] =
	{
		.size = 0x44,
		.y_offset = 0x13,
	},
	[SPECIES_UNOWN_X] =
	{
		.size = 0x33,
		.y_offset = 0x15,
	},
	[SPECIES_UNOWN_Y] =
	{
		.size = 0x34,
		.y_offset = 0x11,
	},
	[SPECIES_UNOWN_Z] =
	{
		.size = 0x34,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_EXCLAMATION] =
	{
		.size = 0x35,
		.y_offset = 0xf,
	},
	[SPECIES_UNOWN_QUESTION] =
	{
		.size = 0x35,
		.y_offset = 0xd,
	},
	[SPECIES_TURTWIG] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_GROTLE] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_TORTERRA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CHIMCHAR] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_MONFERNO] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_INFERNAPE] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_PIPLUP] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_PRINPLUP] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_EMPOLEON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_STARLY] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_STARAVIA] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_STARAPTOR] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_BIDOOF] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_BIBAREL] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_KRICKETOT] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_KRICKETUNE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_SHINX] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_LUXIO] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_LUXRAY] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_BUDEW] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_ROSERADE] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_CRANIDOS] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_RAMPARDOS] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_SHIELDON] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_BASTIODON] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_BURMY] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_WORMADAM] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_MOTHIM] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_COMBEE] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_VESPIQUEN] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PACHIRISU] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_BUIZEL] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_FLOATZEL] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_CHERUBI] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_CHERRIM] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_SHELLOS] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_GASTRODON] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_AMBIPOM] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_DRIFLOON] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_DRIFBLIM] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_BUNEARY] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_LOPUNNY] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_MISMAGIUS] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_HONCHKROW] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GLAMEOW] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_PURUGLY] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_CHINGLING] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_STUNKY] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_SKUNTANK] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_BRONZOR] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_BRONZONG] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_BONSLY] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_MIME_JR] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_HAPPINY] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_CHATOT] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_SPIRITOMB] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_GIBLE] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_GABITE] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_GARCHOMP] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MUNCHLAX] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_RIOLU] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_LUCARIO] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_HIPPOPOTAS] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_HIPPOWDON] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_SKORUPI] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_DRAPION] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_CROAGUNK] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_TOXICROAK] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_CARNIVINE] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_FINNEON] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_LUMINEON] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_MANTYKE] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_SNOVER] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_ABOMASNOW] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_WEAVILE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_MAGNEZONE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_LICKILICKY] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_RHYPERIOR] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_TANGROWTH] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_ELECTIVIRE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MAGMORTAR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TOGEKISS] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_YANMEGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_LEAFEON] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_GLACEON] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_GLISCOR] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_MAMOSWINE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PORYGON_Z] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_GALLADE] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_PROBOPASS] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_DUSKNOIR] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_FROSLASS] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_ROTOM] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_UXIE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_MESPRIT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_AZELF] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DIALGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PALKIA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_HEATRAN] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_REGIGIGAS] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_GIRATINA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CRESSELIA] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_PHIONE] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_MANAPHY] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_DARKRAI] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_SHAYMIN] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_ARCEUS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VICTINI] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_SNIVY] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_SERVINE] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_SERPERIOR] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_TEPIG] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_PIGNITE] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_EMBOAR] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_OSHAWOTT] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_DEWOTT] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_SAMUROTT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PATRAT] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_WATCHOG] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_LILLIPUP] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_HERDIER] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_STOUTLAND] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_PURRLOIN] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_LIEPARD] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PANSAGE] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_SIMISAGE] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_PANSEAR] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_SIMISEAR] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_PANPOUR] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_SIMIPOUR] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_MUNNA] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_MUSHARNA] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_PIDOVE] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_TRANQUILL] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_UNFEZANT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BLITZLE] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_ZEBSTRIKA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ROGGENROLA] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_BOLDORE] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_GIGALITH] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_WOOBAT] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_SWOOBAT] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_DRILBUR] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_EXCADRILL] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_AUDINO] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_TIMBURR] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_GURDURR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CONKELDURR] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_TYMPOLE] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_PALPITOAD] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_SEISMITOAD] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_THROH] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_SAWK] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_SEWADDLE] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_SWADLOON] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_LEAVANNY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VENIPEDE] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_WHIRLIPEDE] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_SCOLIPEDE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_COTTONEE] =
	{
		.size = 0x0,
		.y_offset = 0x12,
	},
	[SPECIES_WHIMSICOTT] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_PETILIL] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_LILLIGANT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BASCULIN_RED] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_SANDILE] =
	{
		.size = 0x0,
		.y_offset = 0x12,
	},
	[SPECIES_KROKOROK] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_KROOKODILE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DARUMAKA] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_DARMANITAN] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MARACTUS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DWEBBLE] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_CRUSTLE] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_SCRAGGY] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_SCRAFTY] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_SIGILYPH] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_YAMASK] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_COFAGRIGUS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TIRTOUGA] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_CARRACOSTA] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_ARCHEN] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_ARCHEOPS] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_TRUBBISH] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_GARBODOR] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_ZORUA] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_ZOROARK] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MINCCINO] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_CINCCINO] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GOTHITA] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_GOTHORITA] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GOTHITELLE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SOLOSIS] =
	{
		.size = 0x0,
		.y_offset = 0x12,
	},
	[SPECIES_DUOSION] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_REUNICLUS] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_DUCKLETT] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_SWANNA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_VANILLITE] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_VANILLISH] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_VANILLUXE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_DEERLING] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_SAWSBUCK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_EMOLGA] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_KARRABLAST] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_ESCAVALIER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FOONGUS] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_AMOONGUSS] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_FRILLISH] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_JELLICENT] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_ALOMOMOLA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_JOLTIK] =
	{
		.size = 0x0,
		.y_offset = 0x12,
	},
	[SPECIES_GALVANTULA] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_FERROSEED] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_FERROTHORN] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_KLINK] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_KLANG] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_KLINKLANG] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_TYNAMO] =
	{
		.size = 0x0,
		.y_offset = 0x18,
	},
	[SPECIES_EELEKTRIK] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_EELEKTROSS] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_ELGYEM] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_BEHEEYEM] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_LITWICK] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_LAMPENT] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_CHANDELURE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_AXEW] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_FRAXURE] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_HAXORUS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CUBCHOO] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_BEARTIC] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_CRYOGONAL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SHELMET] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_ACCELGOR] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_STUNFISK] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_MIENFOO] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_MIENSHAO] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_DRUDDIGON] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_GOLETT] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GOLURK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PAWNIARD] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_BISHARP] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BOUFFALANT] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_RUFFLET] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_BRAVIARY] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_VULLABY] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_MANDIBUZZ] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_HEATMOR] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_DURANT] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_DEINO] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_ZWEILOUS] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_HYDREIGON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LARVESTA] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_VOLCARONA] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_COBALION] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TERRAKION] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_VIRIZION] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_TORNADUS] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_THUNDURUS] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_RESHIRAM] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_ZEKROM] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LANDORUS] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_KYUREM] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KELDEO] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_MELOETTA] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_GENESECT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_UNFEZANT_F] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FRILLISH_F] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_JELLICENT_F] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_SHADOW_WARRIOR] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_BURMY_SANDY] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_BURMY_TRASH] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_WORMADAM_SANDY] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_WORMADAM_TRASH] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_SHELLOS_EAST] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_GASTRODON_EAST] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_ROTOM_HEAT] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_ROTOM_WASH] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ROTOM_FROST] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_ROTOM_FAN] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_ROTOM_MOW] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_GIRATINA_ORIGIN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SHAYMIN_SKY] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_ARCEUS_FIGHT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_FLYING] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_POISON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_GROUND] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_ROCK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_BUG] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_GHOST] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_STEEL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_FIRE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_WATER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_GRASS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_ELECTRIC] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_PSYCHIC] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_ICE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_DRAGON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_DARK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BASCULIN_BLUE] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_DARMANITANZEN] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_DEERLING_SUMMER] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_DEERLING_AUTUMN] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_DEERLING_WINTER] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_SAWSBUCK_SUMMER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SAWSBUCK_AUTUMN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SAWSBUCK_WINTER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_HIPPOPOTAS_F] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_HIPPOWDON_F] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_MELOETTA_PIROUETTE] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_GENESECT_SHOCK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GENESECT_BURN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GENESECT_CHILL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GENESECT_DOUSE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CHERRIM_SUN] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_KYUREM_BLACK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KYUREM_WHITE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TORNADUS_THERIAN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_THUNDURUS_THERIAN] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_LANDORUS_THERIAN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KELDEO_RESOLUTE] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_CHESPIN] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_QUILLADIN] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_CHESNAUGHT] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_FENNEKIN] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_BRAIXEN] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_DELPHOX] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FROAKIE] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_FROGADIER] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_GRENINJA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_BUNNELBY] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_DIGGERSBY] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_FLETCHLING] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_FLETCHINDER] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_TALONFLAME] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_SCATTERBUG] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_SPEWPA] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_VIVILLON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LITLEO] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_PYROAR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FLABEBE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_FLOETTE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FLORGES] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SKIDDO] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GOGOAT] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_PANCHAM] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_PANGORO] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FURFROU] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_ESPURR] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_MEOWSTIC] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_HONEDGE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_DOUBLADE] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_AEGISLASH] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SPRITZEE] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_AROMATISSE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_SWIRLIX] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_SLURPUFF] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_INKAY] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_MALAMAR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BINACLE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_BARBARACLE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SKRELP] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_DRAGALGE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CLAUNCHER] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_CLAWITZER] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_HELIOPTILE] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_HELIOLISK] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_TYRUNT] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_TYRANTRUM] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_AMAURA] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_AURORUS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SYLVEON] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_HAWLUCHA] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_DEDENNE] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_CARBINK] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_GOOMY] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_SLIGGOO] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_GOODRA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KLEFKI] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PHANTUMP] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_TREVENANT] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_PUMPKABOO] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_GOURGEIST] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_BERGMITE] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_AVALUGG] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_NOIBAT] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_NOIVERN] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_XERNEAS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_YVELTAL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ZYGARDE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DIANCIE] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_HOOPA] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_HOOPA_UNBOUND] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VOLCANION] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PYROAR_FEMALE] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_MEOWSTIC_FEMALE] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_AEGISLASH_BLADE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCEUS_FAIRY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ZYGARDE_CELL] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_ZYGARDE_CORE] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_ZYGARDE_10] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_ZYGARDE_COMPLETE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ASHGRENINJA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FLABEBE_BLUE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_FLABEBE_ORANGE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_FLABEBE_YELLOW] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_FLABEBE_WHITE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_FLOETTE_BLUE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FLOETTE_ORANGE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FLOETTE_YELLOW] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FLOETTE_WHITE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FLOETTE_ETERNAL] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FLORGES_BLUE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FLORGES_ORANGE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FLORGES_YELLOW] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FLORGES_WHITE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PUMPKABOO_XL] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_PUMPKABOO_L] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_PUMPKABOO_M] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_GOURGEIST_XL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GOURGEIST_L] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_GOURGEIST_M] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_FURFROU_HEART] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_FURFROU_DIAMOND] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_FURFROU_STAR] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_FURFROU_PHAROAH] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FURFROU_KABUKI] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FURFROU_LA_REINE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FURFROU_MATRON] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FURFROU_DANDY] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_FURFROU_DEBUTANTE] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_VIVILLON_FANCY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VENUSAUR_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_CHARIZARD_MEGA_X] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CHARIZARD_MEGA_Y] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BLASTOISE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BEEDRILL_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_PIDGEOT_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_ALAKAZAM_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SLOWBRO_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GENGAR_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_KANGASKHAN_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PINSIR_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_GYARADOS_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_AERODACTYL_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MEWTWO_MEGA_X] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MEWTWO_MEGA_Y] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_AMPHAROS_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_STEELIX_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SCIZOR_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_HERACROSS_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_HOUNDOOM_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TYRANITAR_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SCEPTILE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BLAZIKEN_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SWAMPERT_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_GARDEVOIR_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SABLEYE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_MAWILE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_AGGRON_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MEDICHAM_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MANECTRIC_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_SHARPEDO_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CAMERUPT_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_ALTARIA_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BANETTE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_ABSOL_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GLALIE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SALAMENCE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_METAGROSS_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LATIAS_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_LATIOS_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GROUDON_PRIMAL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KYOGRE_PRIMAL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_RAYQUAZA_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LOPUNNY_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_GARCHOMP_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LUCARIO_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ABOMASNOW_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_GALLADE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_AUDINO_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_DIANCIE_MEGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_DIALGA_ORIGIN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PALKIA_ORIGIN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_ARCHIPELAGO] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_CONTINENTAL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_ELEGANT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_GARDEN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_HIGH_PLAINS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_ICY_SNOW] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_JUNGLE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_MARINE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_MODERN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_MONSOON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_OCEAN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_POKEBALL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_POLAR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_RIVER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_SANDSTORM] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_SAVANNA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_SUN] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VIVILLON_TUNDRA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ROWLET] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_DARTRIX] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_DECIDUEYE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LITTEN] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_TORRACAT] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_INCINEROAR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_POPPLIO] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_BRIONNE] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_PRIMARINA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PIKIPEK] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_TRUMBEAK] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_TOUCANNON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_YUNGOOS] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_GUMSHOOS] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_GRUBBIN] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_CHARJABUG] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_VIKAVOLT] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_CRABRAWLER] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_CRABOMINABLE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ORICORIO] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_CUTIEFLY] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_RIBOMBEE] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_ROCKRUFF] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_LYCANROC] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_WISHIWASHI] =
	{
		.size = 0x0,
		.y_offset = 0x15,
	},
	[SPECIES_MAREANIE] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_TOXAPEX] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MUDBRAY] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_MUDSDALE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DEWPIDER] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_ARAQUANID] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_FOMANTIS] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_LURANTIS] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MORELULL] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_SHIINOTIC] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_SALANDIT] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_SALAZZLE] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_STUFFUL] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_BEWEAR] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_BOUNSWEET] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_STEENEE] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_TSAREENA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_COMFEY] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_ORANGURU] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_PASSIMIAN] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_WIMPOD] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_GOLISOPOD] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SANDYGAST] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_PALOSSAND] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_PYUKUMUKU] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_TYPE_NULL] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_SILVALLY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MINIOR_SHIELD] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_KOMALA] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_TURTONATOR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TOGEDEMARU] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_MIMIKYU] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_BRUXISH] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_DRAMPA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DHELMISE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_JANGMO_O] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_HAKAMO_O] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KOMMO_O] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TAPU_KOKO] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_TAPU_LELE] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_TAPU_BULU] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TAPU_FINI] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_COSMOG] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_COSMOEM] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_SOLGALEO] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LUNALA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_NIHILEGO] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_BUZZWOLE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PHEROMOSA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_XURKITREE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CELESTEELA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KARTANA] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_GUZZLORD] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_NECROZMA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MAGEARNA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MARSHADOW] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_RATTATA_A] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_RATICATE_A] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_RAICHU_A] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_SANDSHREW_A] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_SANDSLASH_A] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_VULPIX_A] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_NINETALES_A] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_DIGLETT_A] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_DUGTRIO_A] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_MEOWTH_A] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PERSIAN_A] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GEODUDE_A] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_GRAVELER_A] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_GOLEM_A] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_GRIMER_A] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_MUK_A] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_EXEGGCUTE_A] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_EXEGGUTOR_A] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_CUBONE_A] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_MAROWAK_A] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_DEOXYS_ATTACK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DEOXYS_DEFENSE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DEOXYS_SPEED] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ORICORIO_Y] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_ORICORIO_P] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_ORICORIO_S] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_LYCANROC_N] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_WISHIWASHI_S] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_SILVALLY_FIGHT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_FLYING] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_POISON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_GROUND] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_ROCK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_BUG] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_GHOST] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_STEEL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_FIRE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_WATER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_GRASS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_ELECTRIC] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_PSYCHIC] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_ICE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_DRAGON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_DARK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SILVALLY_FAIRY] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MINIOR_RED] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_MINIOR_BLUE] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_MINIOR_ORANGE] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_MINIOR_YELLOW] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_MINIOR_INDIGO] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_MINIOR_GREEN] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_MINIOR_VIOLET] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_MIMIKYU_BUSTED] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_MAGEARNA_P] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_POIPOLE] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_NAGANADEL] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_STAKATAKA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BLACEPHALON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ZERAORA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_NECROZMA_DUSK_MANE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_NECROZMA_DAWN_WINGS] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_NECROZMA_ULTRA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LYCANROC_DUSK] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MELTAN] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_MELMETAL] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_PIKACHU_SURFING] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_PIKACHU_FLYING] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PIKACHU_COSPLAY] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_LIBRE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_POP_STAR] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_ROCK_STAR] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_BELLE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_PHD] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_CAP_ORIGINAL] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_CAP_HOENN] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_CAP_SINNOH] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_CAP_UNOVA] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_CAP_KALOS] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_CAP_ALOLA] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PIKACHU_CAP_PARTNER] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PICHU_SPIKY] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_XERNEAS_NATURAL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GROOKEY] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_THWACKEY] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_RILLABOOM] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SCORBUNNY] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_RABOOT] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_CINDERACE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SOBBLE] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_DRIZZILE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_INTELEON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SKWOVET] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_GREEDENT] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_ROOKIDEE] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_CORVISQUIRE] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_CORVIKNIGHT] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_BLIPBUG] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_DOTTLER] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_ORBEETLE] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_NICKIT] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_THIEVUL] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GOSSIFLEUR] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_ELDEGOSS] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_WOOLOO] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_DUBWOOL] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_CHEWTLE] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_DREDNAW] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_YAMPER] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_BOLTUND] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_ROLYCOLY] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_CARKOL] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_COALOSSAL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_APPLIN] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_FLAPPLE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_APPLETUN] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_SILICOBRA] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_SANDACONDA] =
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_CRAMORANT] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARROKUDA] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_BARRASKEWDA] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_TOXEL] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_TOXTRICITY] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_SIZZLIPEDE] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_CENTISKORCH] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_CLOBBOPUS] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_GRAPPLOCT] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_SINISTEA] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_POLTEAGEIST] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_HATENNA] =
	{
		.size = 0x0,
		.y_offset = 0x14,
	},
	[SPECIES_HATTREM] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_HATTERENE] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_IMPIDIMP] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_MORGREM] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_GRIMMSNARL] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_OBSTAGOON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PERRSERKER] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_CURSOLA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SIRFETCHD] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MR_RIME] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_RUNERIGUS] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MILCERY] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_ALCREMIE_STRAWBERRY] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_FALINKS] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_PINCURCHIN] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_SNOM] =
	{
		.size = 0x0,
		.y_offset = 0x14,
	},
	[SPECIES_FROSMOTH] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_STONJOURNER] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_EISCUE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_INDEEDEE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_MORPEKO] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_CUFANT] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_COPPERAJAH] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_DRACOZOLT] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_ARCTOZOLT] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_DRACOVISH] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ARCTOVISH] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_DURALUDON] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DREEPY] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_DRAKLOAK] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_DRAGAPULT] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_ZACIAN] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_ZAMAZENTA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ETERNATUS] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_KUBFU] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_URSHIFU_SINGLE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ZARUDE] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_REGIELEKI] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_REGIDRAGO] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_GLASTRIER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SPECTRIER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CALYREX] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_CRAMORANT_GULPING] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CRAMORANT_GORGING] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TOXTRICITY_LOW_KEY] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_SINISTEA_CHIPPED] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_POLTEAGEIST_CHIPPED] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_ALCREMIE_BERRY] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ALCREMIE_CLOVER] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ALCREMIE_FLOWER] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ALCREMIE_LOVE] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ALCREMIE_RIBBON] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ALCREMIE_STAR] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_EISCUE_NOICE] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_INDEEDEE_FEMALE] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_MORPEKO_HANGRY] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_ZACIAN_CROWNED] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ZAMAZENTA_CROWNED] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ETERNATUS_ETERNAMAX] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_URSHIFU_RAPID] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ZARUDE_DADA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_CALYREX_ICE_RIDER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CALYREX_SHADOW_RIDER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MEOWTH_G] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_PONYTA_G] =
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_RAPIDASH_G] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SLOWPOKE_G] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_SLOWBRO_G] =
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_FARFETCHD_G] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_KOFFING_G] =
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_WEEZING_G] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MR_MIME_G] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ARTICUNO_G] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_ZAPDOS_G] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MOLTRES_G] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SLOWKING_G] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CORSOLA_G] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_ZIGZAGOON_G] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_LINOONE_G] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_MIME_JR_G] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_DARUMAKA_G] =
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_DARMANITAN_G] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DARMANITAN_G_ZEN] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_YAMASK_G] =
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_STUNFISK_G] =
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_GROWLITHE_H] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_ARCANINE_H] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VOLTORB_H] =
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_ELECTRODE_H] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_TYPHLOSION_H] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_QWILFISH_H] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_SNEASEL_H] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_SAMUROTT_H] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_LILLIGANT_H] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BASCULIN_H] =
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_ZORUA_H] =
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_ZOROARK_H] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BRAVIARY_H] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SLIGGOO_H] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_GOODRA_H] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_AVALUGG_H] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_DECIDUEYE_H] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_WYRDEER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KLEAVOR] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_URSALUNA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_BASCULEGION_M] =
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_BASCULEGION_F] =
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_SNEASLER] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_OVERQWIL] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ENAMORUS] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_ENAMORUS_THERIAN] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_SPRIGATITO]
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_FLORAGATO]
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_MEOWSCARADA]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FUECOCO]
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_CROCALOR]
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_SKELEDIRGE]
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_QUAXLY]
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_QUAXWELL]
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_QUAQUAVAL]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LECHONK]
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_OINKOLOGNE]
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_OINKOLOGNE_FEMALE]
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_TAROUNTULA]
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_SPIDOPS]
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_NYMBLE]
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_LOKIX]
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_PAWMI]
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_PAWMO]
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_PAWMOT]
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_TANDEMAUS]
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_MAUSHOLD]
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_MAUSHOLD_FOUR]
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_FIDOUGH]
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_DACHSBUN]
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_SMOLIV]
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_DOLLIV]
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_ARBOLIVA]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SQUAWKABILLY]
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_SQUAWKABILLY_BLUE]
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_SQUAWKABILLY_YELLOW]
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_SQUAWKABILLY_WHITE]
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_NACLI]
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_NACLSTACK]
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_GARGANACL]
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_CHARCADET]
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_ARMAROUGE]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CERULEDGE]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TADBULB]
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_BELLIBOLT]
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_WATTREL]
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_KILOWATTREL]
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_MASCHIFF]
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_MABOSSTIFF]
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_SHROODLE]
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_GRAFAIAI]
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_BRAMBLIN]
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_BRAMBLEGHAST]
	{
		.size = 0x0,
		.y_offset = 0x9,
	},
	[SPECIES_TOEDSCOOL]
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_TOEDSCRUEL]
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_KLAWF]
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_CAPSAKID]
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_SCOVILLAIN]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_RELLOR]
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_RABSCA]
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_FLITTLE]
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_ESPATHRA]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TINKATINK]
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_TINKATUFF]
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_TINKATON]
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_WIGLETT]
	{
		.size = 0x0,
		.y_offset = 0x13,
	},
	[SPECIES_WUGTRIO]
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_BOMBIRDIER]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FINIZEN]
	{
		.size = 0x0,
		.y_offset = 0xf,
	},
	[SPECIES_PALAFIN]
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_PALAFIN_HERO]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_VAROOM]
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_REVAVROOM]
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_CYCLIZAR]
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_ORTHWORM]
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_GLIMMET]
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	[SPECIES_GLIMMORA]
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_GREAVARD]
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_HOUNDSTONE]
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_FLAMIGO]
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_CETODDLE]
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_CETITAN]
	{
		.size = 0x0,
		.y_offset = 0x6,
	},
	[SPECIES_VELUZA]
	{
		.size = 0x0,
		.y_offset = 0xb,
	},
	[SPECIES_DONDOZO]
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_TATSUGIRI]
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_TATSUGIRI_RED]
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_TATSUGIRI_YELLOW]
	{
		.size = 0x0,
		.y_offset = 0xe,
	},
	[SPECIES_FRIGIBAX]
	{
		.size = 0x0,
		.y_offset = 0xd,
	},
	[SPECIES_ARCTIBAX]
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_BAXCALIBUR]
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_GIMMIGHOUL]
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_GIMMIGHOUL_ROAMING]
	{
		.size = 0x0,
		.y_offset = 0x11,
	},
	[SPECIES_GHOLDENGO]
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_CLODSIRE]
	{
		.size = 0x0,
		.y_offset = 0x8,
	},
	[SPECIES_ANNIHILAPE]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DUDUNSPARCE]
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_DUDUNSPARCE_THREE]
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_FARIGIRAF]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_KINGAMBIT]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GREAT_TUSK]
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_SCREAM_TAIL]
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_BRUTE_BONNET]
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_FLUTTER_MANE]
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_SLITHER_WING]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SANDY_SHOCKS]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ROARING_MOON]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_IRON_TREADS]
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_IRON_BUNDLE]
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_IRON_HANDS]
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_IRON_JUGULIS]
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_IRON_MOTH]
	{
		.size = 0x0,
		.y_offset = 0xa,
	},
	[SPECIES_IRON_THORNS]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_IRON_VALIANT]
	{
		.size = 0x0,
		.y_offset = 0x0,
        },
	[SPECIES_WALKING_WAKE]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
        [SPECIES_IRON_LEAVES]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TING_LU]
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_CHIEN_PAO]
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_WO_CHIEN]
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_CHI_YU]
	{
		.size = 0x0,
		.y_offset = 0xc,
	},
	[SPECIES_KORAIDON]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_MIRAIDON]
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
        [SPECIES_TERAPAGOS]
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
        [SPECIES_OGERPON]
	{
		.size = 0x0,
		.y_offset = 0x1,
        },
        [SPECIES_MONKIDORI]
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
        [SPECIES_OKIDOGI]
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
        [SPECIES_FEZANDIPITI]
	{
		.size = 0x0,
		.y_offset = 0x4,
	},
	[SPECIES_TAUROS_P]
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_TAUROS_BLAZE_P]
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_TAUROS_AQUA_P]
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_WOOPER_P]
	{
		.size = 0x0,
		.y_offset = 0x10,
	},
	//New Species Go Here

	[SPECIES_VENUSAUR_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_CHARIZARD_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_BLASTOISE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_BUTTERFREE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_PIKACHU_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MEOWTH_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_MACHAMP_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GENGAR_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x7,
	},
	[SPECIES_KINGLER_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_LAPRAS_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_EEVEE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_SNORLAX_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GARBODOR_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_MELMETAL_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x1,
	},
	[SPECIES_RILLABOOM_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CINDERACE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_INTELEON_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CORVIKNIGHT_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_ORBEETLE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x2,
	},
	[SPECIES_DREDNAW_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_COALOSSAL_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_FLAPPLE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_APPLETUN_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x3,
	},
	[SPECIES_SANDACONDA_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TOXTRICITY_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_TOXTRICITY_LOW_KEY_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_CENTISKORCH_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x5,
	},
	[SPECIES_HATTERENE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_GRIMMSNARL_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_ALCREMIE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_COPPERAJAH_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_DURALUDON_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_URSHIFU_SINGLE_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
	[SPECIES_URSHIFU_RAPID_GIGA] =
	{
		.size = 0x0,
		.y_offset = 0x0,
	},
};
