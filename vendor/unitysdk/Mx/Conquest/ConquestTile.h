#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class HexLocation; }
namespace UnityEngine { class Vector3; }
namespace MX::Conquest { class ConquestUnit; }
namespace MX::Conquest { class ConquestObject; }
namespace FlatData { class TileState; }
namespace MX::Data::Excel { class ConquestTileExcel; }
namespace MX::Conquest { class ConquestTile; }
namespace MX::GameLogic::DBModel { class ConquestTileDB; }

#define MX_CONQUEST_CONQUESTTILE_GET_RESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x1425730)
#define MX_CONQUEST_CONQUESTTILE_GET_CONQUESTTILEEXCEL_OFFSET UNITYSDK_OFFSET(0x14257A0)
#define MX_CONQUEST_CONQUESTTILE_GET_ISCONQUESTED_OFFSET UNITYSDK_OFFSET(0x1425870)
#define MX_CONQUEST_CONQUESTTILE_GET_HASEROSIONENEMY_OFFSET UNITYSDK_OFFSET(0x1425890)
#define MX_CONQUEST_CONQUESTTILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1425A40)
#define MX_CONQUEST_CONQUESTTILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1425B00)
#define MX_CONQUEST_CONQUESTTILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1425C50)
#define MX_CONQUEST_CONQUESTTILE_CLONE_OFFSET UNITYSDK_OFFSET(0x1425DC0)
#define MX_CONQUEST_CONQUESTTILE_SETLOCATION_OFFSET UNITYSDK_OFFSET(0x1425E20)
#define MX_CONQUEST_CONQUESTTILE_SYNCDB_OFFSET UNITYSDK_OFFSET(0x1426040)
#define MX_CONQUEST_CONQUESTTILE_ISOVERLAP_OFFSET UNITYSDK_OFFSET(0x14260A0)
#define MX_CONQUEST_CONQUESTTILE_ISPLAYERTERRITORY_OFFSET UNITYSDK_OFFSET(0x1426820)
#define MX_CONQUEST_CONQUESTTILE_SETSTEP_OFFSET UNITYSDK_OFFSET(0x1426880)
#define MX_CONQUEST_CONQUESTTILE_SETEXCEL_OFFSET UNITYSDK_OFFSET(0x14268A0)

namespace MX::Conquest
{
	inline static constexpr unsigned int ConquestTile_TypeDefinitionIndex = 14831;

	class ConquestTile : public Il2CppObject
	{
	public:
		::System::Int64 TileUniqueId; // 0x10
		::System::Int64 ConquestTilePresetId; // 0x18
		::MX::Campaign::HexLocation* Location; // 0x20
		Il2CppObject* AdditionalLocations; // 0x30
		::UnityEngine::Vector3* Rotate; // 0x38
		::MX::Conquest::ConquestUnit* Unit; // 0x48
		::MX::Conquest::ConquestObject* ConquestObject; // 0x50
		::MX::Conquest::ConquestUnit* OriginalUnit; // 0x58
		Il2CppObject* _conquestTileExcel; // 0x60
		::System::Int32 Step; // 0x78
		::System::Int32 Level; // 0x7C
		::FlatData::TileState* ConquestState; // 0x80

		::System::String* get_ResourcePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILE_GET_RESOURCEPATH_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestTileExcel* get_ConquestTileExcel()
		{
			return ((::MX::Data::Excel::ConquestTileExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILE_GET_CONQUESTTILEEXCEL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsConquested()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILE_GET_ISCONQUESTED_OFFSET))(nullptr);
		}

		::System::Boolean get_HasErosionEnemy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILE_GET_HASEROSIONENEMY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ConquestTileExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestTileExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Conquest::ConquestTile* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestTile* Clone()
		{
			return ((::MX::Conquest::ConquestTile*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILE_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetLocation(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILE_SETLOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void SyncDB(::MX::GameLogic::DBModel::ConquestTileDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestTileDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILE_SYNCDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOverlap(::MX::Conquest::ConquestTile* arg)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILE_ISOVERLAP_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPlayerTerritory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILE_ISPLAYERTERRITORY_OFFSET))(nullptr);
		}

		::System::Void SetStep(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILE_SETSTEP_OFFSET))(arg, nullptr);
		}

		::System::Void SetExcel(::MX::Data::Excel::ConquestTileExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestTileExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILE_SETEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

