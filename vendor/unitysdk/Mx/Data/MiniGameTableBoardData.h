#pragma once
#include "../../unitysdk.h"

namespace FlatData { class TBGThemaType; }
namespace FlatData { class MiniGameTBGThemaRewardType; }
namespace MX::Data { class ITBGThemaRewardInfo&; }
namespace MX::Data { class ITBGSeasonInfo&; }
namespace MX::TableBoard { class TBGHexaMapData; }
namespace FlatData { class TBGVoiceCondition; }
namespace MX::Data { class ITBGObjectInfo&; }
namespace MX::Data { class ITBGEncounterOptionInfo&; }
namespace MX::Data { class ITBGThemaInfo&; }
namespace FlatData { class TBGObjectType; }
namespace MX::Data { class ITBGEncounterInfo&; }
namespace MX::Data { class ITBGItemInfo&; }
namespace MX::Data { class ITBGEncounterRewardInfo&; }

#define MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETTHEMAREWARDINFO_OFFSET UNITYSDK_OFFSET(0x190C8B0)
#define MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETSEASONINFO_OFFSET UNITYSDK_OFFSET(0x190CDB0)
#define MX_DATA_MINIGAMETABLEBOARDDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x190CE10)
#define MX_DATA_MINIGAMETABLEBOARDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19104D0)
#define MX_DATA_MINIGAMETABLEBOARDDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1910820)
#define MX_DATA_MINIGAMETABLEBOARDDATA_GETHEXAMAPDATA_OFFSET UNITYSDK_OFFSET(0x1910970)
#define MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETENCOUNTERREWARDINFOS_OFFSET UNITYSDK_OFFSET(0x1910AB0)
#define MX_DATA_MINIGAMETABLEBOARDDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x1910B10)
#define MX_DATA_MINIGAMETABLEBOARDDATA_HASHIDDENTHEMAMAP_OFFSET UNITYSDK_OFFSET(0x1910D20)
#define MX_DATA_MINIGAMETABLEBOARDDATA_SET_RAWDATAPATH_OFFSET UNITYSDK_OFFSET(0x1910DC0)
#define MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETVOICEINFOS_OFFSET UNITYSDK_OFFSET(0x1910DD0)
#define MX_DATA_MINIGAMETABLEBOARDDATA_ISLASTTHEMAINDEXINROUND_OFFSET UNITYSDK_OFFSET(0x1910E90)
#define MX_DATA_MINIGAMETABLEBOARDDATA_GETNEXTHEXAMAPTHEMAINDEX_OFFSET UNITYSDK_OFFSET(0x1910EB0)
#define MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x19110F0)
#define MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETDICEINFOS_OFFSET UNITYSDK_OFFSET(0x1911150)
#define MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETENCOUNTEROPTIONINFO_OFFSET UNITYSDK_OFFSET(0x1911210)
#define MX_DATA_MINIGAMETABLEBOARDDATA_GETINITIALHEXAMAPTHEMAINDEX_OFFSET UNITYSDK_OFFSET(0x1911270)
#define MX_DATA_MINIGAMETABLEBOARDDATA_GETLOOPHEXAMAPTHEMAINDEX_OFFSET UNITYSDK_OFFSET(0x1911390)
#define MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETTHEMAINFO_OFFSET UNITYSDK_OFFSET(0x190CD00)
#define MX_DATA_MINIGAMETABLEBOARDDATA_GETDICECOUNT_OFFSET UNITYSDK_OFFSET(0x19114B0)
#define MX_DATA_MINIGAMETABLEBOARDDATA_GETOBJECTUNIQUEIDSBYTYPE_OFFSET UNITYSDK_OFFSET(0x1911570)
#define MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETENCOUNTERINFO_OFFSET UNITYSDK_OFFSET(0x1911770)
#define MX_DATA_MINIGAMETABLEBOARDDATA_GETALLITEMINFOS_OFFSET UNITYSDK_OFFSET(0x19117D0)
#define MX_DATA_MINIGAMETABLEBOARDDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1911820)
#define MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETREALTREASUREENCOUNTERINFO_OFFSET UNITYSDK_OFFSET(0x1911CD0)
#define MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETITEMINFO_OFFSET UNITYSDK_OFFSET(0x1911DF0)
#define MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETENCOUNTERREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1911E50)
#define MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETENCOUNTEROPTIONINFOBYOPTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1912090)
#define MX_DATA_MINIGAMETABLEBOARDDATA_GET_RAWDATAPATH_OFFSET UNITYSDK_OFFSET(0x19122B0)
#define MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETALLENCOUNTERINFOS_OFFSET UNITYSDK_OFFSET(0x19122C0)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameTableBoardData_TypeDefinitionIndex = 16255;

	class MiniGameTableBoardData : public Il2CppObject
	{
	public:
		Il2CppObject* seasonInfoDic; // 0x28
		Il2CppObject* themaInfoDic; // 0x30
		Il2CppObject* objectInfoDic; // 0x38
		Il2CppObject* diceInfoDic; // 0x40
		Il2CppObject* itemInfoDic; // 0x48
		Il2CppObject* encounterInfoDic; // 0x50
		Il2CppObject* encounterOptionInfoDic; // 0x58
		Il2CppObject* encounterRewardInfoDic; // 0x60
		Il2CppObject* themaRewardInfoDic; // 0x68
		Il2CppObject* voiceInfoDic; // 0x70
		::System::String* _RawDataPath_k__BackingField; // 0x78

		::System::Boolean TryGetThemaRewardInfo(::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatData::TBGThemaType* arg, ::FlatData::MiniGameTBGThemaRewardType* arg, ::MX::Data::ITBGThemaRewardInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int32, ::System::Int32, ::FlatData::TBGThemaType*, ::FlatData::MiniGameTBGThemaRewardType*, ::MX::Data::ITBGThemaRewardInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETTHEMAREWARDINFO_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetSeasonInfo(::System::Int64 arg, ::MX::Data::ITBGSeasonInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::ITBGSeasonInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETSEASONINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::MX::TableBoard::TBGHexaMapData* GetHexaMapData(::System::Int64 arg, ::System::Int32 arg, ::FlatData::TBGThemaType* arg)
		{
			return (return (::MX::TableBoard::TBGHexaMapData*(*)(::System::Int64, ::System::Int32, ::FlatData::TBGThemaType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_GETHEXAMAPDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetEncounterRewardInfos(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETENCOUNTERREWARDINFOS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

		::System::Boolean HasHiddenThemaMap(::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_HASHIDDENTHEMAMAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_RawDataPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_SET_RAWDATAPATH_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetVoiceInfos(::System::Int64 arg, ::FlatData::TBGVoiceCondition* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::TBGVoiceCondition*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETVOICEINFOS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsLastThemaIndexInRound(::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_ISLASTTHEMAINDEXINROUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetNextHexaMapThemaIndex(::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_GETNEXTHEXAMAPTHEMAINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetObjectInfo(::System::Int64 arg, ::MX::Data::ITBGObjectInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::ITBGObjectInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETOBJECTINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDiceInfos(::System::Int64 arg, ::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETDICEINFOS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetEncounterOptionInfo(::System::Int64 arg, ::MX::Data::ITBGEncounterOptionInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::ITBGEncounterOptionInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETENCOUNTEROPTIONINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetInitialHexaMapThemaIndex(::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_GETINITIALHEXAMAPTHEMAINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetLoopHexaMapThemaIndex(::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_GETLOOPHEXAMAPTHEMAINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetThemaInfo(::System::Int64 arg, ::System::Int32 arg, ::FlatData::TBGThemaType* arg, ::MX::Data::ITBGThemaInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int32, ::FlatData::TBGThemaType*, ::MX::Data::ITBGThemaInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETTHEMAINFO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetDiceCount(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_GETDICECOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetObjectUniqueIdsByType(::FlatData::TBGObjectType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::TBGObjectType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_GETOBJECTUNIQUEIDSBYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetEncounterInfo(::System::Int64 arg, ::MX::Data::ITBGEncounterInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::ITBGEncounterInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETENCOUNTERINFO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetAllItemInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_GETALLITEMINFOS_OFFSET))(nullptr);
		}

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Boolean TryGetRealTreasureEncounterInfo(::System::Int64 arg, ::System::Int32 arg, ::FlatData::TBGThemaType* arg, ::MX::Data::ITBGEncounterInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int32, ::FlatData::TBGThemaType*, ::MX::Data::ITBGEncounterInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETREALTREASUREENCOUNTERINFO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetItemInfo(::System::Int64 arg, ::MX::Data::ITBGItemInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::ITBGItemInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETITEMINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetEncounterRewardInfo(::System::Int64 arg, ::MX::Data::ITBGEncounterRewardInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::ITBGEncounterRewardInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETENCOUNTERREWARDINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetEncounterOptionInfoByOptionGroupId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETENCOUNTEROPTIONINFOBYOPTIONGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_RawDataPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_GET_RAWDATAPATH_OFFSET))(nullptr);
		}

		::System::Boolean TryGetAllEncounterInfos(::System::Int64 arg, ::System::Int32 arg, ::FlatData::TBGThemaType* arg, ::FlatData::TBGObjectType* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int32, ::FlatData::TBGThemaType*, ::FlatData::TBGObjectType*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMETABLEBOARDDATA_TRYGETALLENCOUNTERINFOS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

