#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ConquestTileExcel; }
namespace FlatData { class ConquestTileType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A672B0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GETROOTASCONQUESTTILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A672C0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GETROOTASCONQUESTTILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A67320)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A673B0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A67380)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A673D0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A67420)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A67460)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1A67480)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_STEP_OFFSET UNITYSDK_OFFSET(0x1A674D0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A67520)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GETPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A67560)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_TILENAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1A67580)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GETTILENAMELOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1A675C0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_TILEIMAGENAME_OFFSET UNITYSDK_OFFSET(0x1A675E0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GETTILEIMAGENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A67620)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_PLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A67640)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_TILETYPE_OFFSET UNITYSDK_OFFSET(0x1A67690)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_NOTMAPFOG_OFFSET UNITYSDK_OFFSET(0x1A676E0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_GROUPBONUSID_OFFSET UNITYSDK_OFFSET(0x1A67730)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_CONQUESTCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A67780)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_CONQUESTCOSTID_OFFSET UNITYSDK_OFFSET(0x1A677D0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_CONQUESTCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A67820)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_MANAGECOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A67870)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_MANAGECOSTID_OFFSET UNITYSDK_OFFSET(0x1A678C0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_MANAGECOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A67910)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_CONQUESTREWARDID_OFFSET UNITYSDK_OFFSET(0x1A67960)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_MASSEROSIONID_OFFSET UNITYSDK_OFFSET(0x1A679B0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_UPGRADE2COSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A67A00)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_UPGRADE2COSTID_OFFSET UNITYSDK_OFFSET(0x1A67A50)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_UPGRADE2COSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A67AA0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_UPGRADE3COSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A67AF0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_UPGRADE3COSTID_OFFSET UNITYSDK_OFFSET(0x1A67B40)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_UPGRADE3COSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A67B90)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_CREATECONQUESTTILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A67BE0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_STARTCONQUESTTILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A68520)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A681A0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1A68440)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDEVENTID_OFFSET UNITYSDK_OFFSET(0x1A68170)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDSTEP_OFFSET UNITYSDK_OFFSET(0x1A68410)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A683E0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDTILENAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1A683B0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDTILEIMAGENAME_OFFSET UNITYSDK_OFFSET(0x1A68380)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A684A0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDTILETYPE_OFFSET UNITYSDK_OFFSET(0x1A68350)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDNOTMAPFOG_OFFSET UNITYSDK_OFFSET(0x1A68470)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDGROUPBONUSID_OFFSET UNITYSDK_OFFSET(0x1A68140)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDCONQUESTCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A68320)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDCONQUESTCOSTID_OFFSET UNITYSDK_OFFSET(0x1A68110)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDCONQUESTCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A682F0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDMANAGECOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A682C0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDMANAGECOSTID_OFFSET UNITYSDK_OFFSET(0x1A680E0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDMANAGECOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A68290)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDCONQUESTREWARDID_OFFSET UNITYSDK_OFFSET(0x1A680B0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDMASSEROSIONID_OFFSET UNITYSDK_OFFSET(0x1A68080)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDUPGRADE2COSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A68260)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDUPGRADE2COSTID_OFFSET UNITYSDK_OFFSET(0x1A68050)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDUPGRADE2COSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A68230)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDUPGRADE3COSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A68200)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDUPGRADE3COSTID_OFFSET UNITYSDK_OFFSET(0x1A68020)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDUPGRADE3COSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A681D0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_ENDCONQUESTTILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A684D0)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_FINISHCONQUESTTILEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A68540)
#define MX_DATA_EXCEL_CONQUESTTILEEXCEL_FINISHSIZEPREFIXEDCONQUESTTILEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A68560)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestTileExcel_TypeDefinitionIndex = 17285;

	class ConquestTileExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestTileExcel* GetRootAsConquestTileExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestTileExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GETROOTASCONQUESTTILEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ConquestTileExcel* GetRootAsConquestTileExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ConquestTileExcel* arg)
		{
			return (return (::MX::Data::Excel::ConquestTileExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ConquestTileExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GETROOTASCONQUESTTILEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ConquestTileExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestTileExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GETNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_EventId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_EVENTID_OFFSET))(nullptr);
		}

		::System::Int32 get_Step()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_STEP_OFFSET))(nullptr);
		}

		::System::String* get_PrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_PREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GETPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TileNameLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_TILENAMELOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetTileNameLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GETTILENAMELOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TileImageName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_TILEIMAGENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetTileImageNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GETTILEIMAGENAMEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_Playable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_PLAYABLE_OFFSET))(nullptr);
		}

		::FlatData::ConquestTileType* get_TileType()
		{
			return (return (::FlatData::ConquestTileType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_TILETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_NotMapFog()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_NOTMAPFOG_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupBonusId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_GROUPBONUSID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ConquestCostType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_CONQUESTCOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ConquestCostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_CONQUESTCOSTID_OFFSET))(nullptr);
		}

		::System::Int32 get_ConquestCostAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_CONQUESTCOSTAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ManageCostType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_MANAGECOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ManageCostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_MANAGECOSTID_OFFSET))(nullptr);
		}

		::System::Int32 get_ManageCostAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_MANAGECOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_ConquestRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_CONQUESTREWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_MassErosionId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_MASSEROSIONID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_Upgrade2CostType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_UPGRADE2COSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Upgrade2CostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_UPGRADE2COSTID_OFFSET))(nullptr);
		}

		::System::Int32 get_Upgrade2CostAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_UPGRADE2COSTAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_Upgrade3CostType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_UPGRADE3COSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Upgrade3CostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_UPGRADE3COSTID_OFFSET))(nullptr);
		}

		::System::Int32 get_Upgrade3CostAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_GET_UPGRADE3COSTAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConquestTileExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::FlatData::ConquestTileType* arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::FlatData::ConquestTileType*, ::System::Boolean, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_CREATECONQUESTTILEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartConquestTileExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_STARTCONQUESTTILEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDEVENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStep(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDSTEP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTileNameLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDTILENAMELOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTileImageName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDTILEIMAGENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPlayable(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDPLAYABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTileType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ConquestTileType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ConquestTileType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDTILETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNotMapFog(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDNOTMAPFOG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupBonusId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDGROUPBONUSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDCONQUESTCOSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestCostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDCONQUESTCOSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDCONQUESTCOSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddManageCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDMANAGECOSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddManageCostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDMANAGECOSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddManageCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDMANAGECOSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDCONQUESTREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMassErosionId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDMASSEROSIONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUpgrade2CostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDUPGRADE2COSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUpgrade2CostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDUPGRADE2COSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUpgrade2CostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDUPGRADE2COSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUpgrade3CostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDUPGRADE3COSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUpgrade3CostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDUPGRADE3COSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUpgrade3CostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ADDUPGRADE3COSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndConquestTileExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_ENDCONQUESTTILEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConquestTileExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_FINISHCONQUESTTILEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedConquestTileExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEEXCEL_FINISHSIZEPREFIXEDCONQUESTTILEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

