#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ObstacleStatExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C1DC30)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GETROOTASOBSTACLESTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1C1DC40)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GETROOTASOBSTACLESTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1C1DCA0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C1DD30)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C1DD00)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_STRINGID_OFFSET UNITYSDK_OFFSET(0x1C1DD50)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C1DDA0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C1DDE0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_MAXHP1_OFFSET UNITYSDK_OFFSET(0x1C1DE00)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_MAXHP100_OFFSET UNITYSDK_OFFSET(0x1C1DE50)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_BLOCKRATE_OFFSET UNITYSDK_OFFSET(0x1C1DEA0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_DODGE_OFFSET UNITYSDK_OFFSET(0x1C1DEF0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_CANNOTSTANDRANGE_OFFSET UNITYSDK_OFFSET(0x1C1DF40)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_HIGHLIGHTFLOATERHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C1DF90)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_ENHANCELIGHTARMORRATE_OFFSET UNITYSDK_OFFSET(0x1C1DFE0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_ENHANCEHEAVYARMORRATE_OFFSET UNITYSDK_OFFSET(0x1C1E030)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_ENHANCEUNARMEDRATE_OFFSET UNITYSDK_OFFSET(0x1C1E080)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_ENHANCEELASTICARMORRATE_OFFSET UNITYSDK_OFFSET(0x1C1E0D0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_ENHANCECOMPOSITEARMORRATE_OFFSET UNITYSDK_OFFSET(0x1C1E120)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_ENHANCESTRUCTURERATE_OFFSET UNITYSDK_OFFSET(0x1C1E170)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_ENHANCENORMALARMORRATE_OFFSET UNITYSDK_OFFSET(0x1C1E1C0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_REDUCEEXDAMAGEDRATE_OFFSET UNITYSDK_OFFSET(0x1C1E210)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_REDUCEBASICSDAMAGEDRATE_OFFSET UNITYSDK_OFFSET(0x1C1E260)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_REDUCEWEAKDAMAGEDRATE_OFFSET UNITYSDK_OFFSET(0x1C1E2B0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_WEAKDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1C1E300)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_EFFECTIVEDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1C1E350)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_NORMALDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1C1E3A0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_RESISTDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1C1E3F0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_CREATEOBSTACLESTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1C1E440)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_STARTOBSTACLESTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1C1ECA0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDSTRINGID_OFFSET UNITYSDK_OFFSET(0x1C1EC20)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1C1EBF0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDMAXHP1_OFFSET UNITYSDK_OFFSET(0x1C1EB90)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDMAXHP100_OFFSET UNITYSDK_OFFSET(0x1C1EB60)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDBLOCKRATE_OFFSET UNITYSDK_OFFSET(0x1C1EB30)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDDODGE_OFFSET UNITYSDK_OFFSET(0x1C1EB00)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDCANNOTSTANDRANGE_OFFSET UNITYSDK_OFFSET(0x1C1EAD0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDHIGHLIGHTFLOATERHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C1EBC0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDENHANCELIGHTARMORRATE_OFFSET UNITYSDK_OFFSET(0x1C1EAA0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDENHANCEHEAVYARMORRATE_OFFSET UNITYSDK_OFFSET(0x1C1EA70)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDENHANCEUNARMEDRATE_OFFSET UNITYSDK_OFFSET(0x1C1EA40)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDENHANCEELASTICARMORRATE_OFFSET UNITYSDK_OFFSET(0x1C1EA10)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDENHANCECOMPOSITEARMORRATE_OFFSET UNITYSDK_OFFSET(0x1C1E9E0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDENHANCESTRUCTURERATE_OFFSET UNITYSDK_OFFSET(0x1C1E9B0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDENHANCENORMALARMORRATE_OFFSET UNITYSDK_OFFSET(0x1C1E980)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDREDUCEEXDAMAGEDRATE_OFFSET UNITYSDK_OFFSET(0x1C1E950)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDREDUCEBASICSDAMAGEDRATE_OFFSET UNITYSDK_OFFSET(0x1C1E920)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDREDUCEWEAKDAMAGEDRATE_OFFSET UNITYSDK_OFFSET(0x1C1E8F0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDWEAKDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1C1E8C0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDEFFECTIVEDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1C1E890)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDNORMALDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1C1E860)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDRESISTDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1C1E830)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_ENDOBSTACLESTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1C1EC50)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_FINISHOBSTACLESTATEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C1ECC0)
#define MX_DATA_EXCEL_OBSTACLESTATEXCEL_FINISHSIZEPREFIXEDOBSTACLESTATEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C1ECE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ObstacleStatExcel_TypeDefinitionIndex = 18988;

	class ObstacleStatExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ObstacleStatExcel* GetRootAsObstacleStatExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ObstacleStatExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GETROOTASOBSTACLESTATEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ObstacleStatExcel* GetRootAsObstacleStatExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ObstacleStatExcel* arg)
		{
			return (return (::MX::Data::Excel::ObstacleStatExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ObstacleStatExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GETROOTASOBSTACLESTATEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ObstacleStatExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ObstacleStatExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_StringID()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_STRINGID_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GETNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxHP1()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_MAXHP1_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxHP100()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_MAXHP100_OFFSET))(nullptr);
		}

		::System::Int64 get_BlockRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_BLOCKRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_Dodge()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_DODGE_OFFSET))(nullptr);
		}

		::System::Int64 get_CanNotStandRange()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_CANNOTSTANDRANGE_OFFSET))(nullptr);
		}

		::System::Single get_HighlightFloaterHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_HIGHLIGHTFLOATERHEIGHT_OFFSET))(nullptr);
		}

		::System::Int64 get_EnhanceLightArmorRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_ENHANCELIGHTARMORRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_EnhanceHeavyArmorRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_ENHANCEHEAVYARMORRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_EnhanceUnarmedRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_ENHANCEUNARMEDRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_EnhanceElasticArmorRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_ENHANCEELASTICARMORRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_EnhanceCompositeArmorRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_ENHANCECOMPOSITEARMORRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_EnhanceStructureRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_ENHANCESTRUCTURERATE_OFFSET))(nullptr);
		}

		::System::Int64 get_EnhanceNormalArmorRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_ENHANCENORMALARMORRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_ReduceExDamagedRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_REDUCEEXDAMAGEDRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_ReduceBasicsDamagedRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_REDUCEBASICSDAMAGEDRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_ReduceWeakDamagedRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_REDUCEWEAKDAMAGEDRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_WeakDamagedRatio()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_WEAKDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Int64 get_EffectiveDamagedRatio()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_EFFECTIVEDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Int64 get_NormalDamagedRatio()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_NORMALDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Int64 get_ResistDamagedRatio()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_GET_RESISTDAMAGEDRATIO_OFFSET))(nullptr);
		}

		Il2CppObject* CreateObstacleStatExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Single arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Single, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_CREATEOBSTACLESTATEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartObstacleStatExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_STARTOBSTACLESTATEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddStringID(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDSTRINGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxHP1(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDMAXHP1_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxHP100(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDMAXHP100_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBlockRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDBLOCKRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDodge(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDDODGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCanNotStandRange(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDCANNOTSTANDRANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHighlightFloaterHeight(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDHIGHLIGHTFLOATERHEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnhanceLightArmorRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDENHANCELIGHTARMORRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnhanceHeavyArmorRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDENHANCEHEAVYARMORRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnhanceUnarmedRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDENHANCEUNARMEDRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnhanceElasticArmorRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDENHANCEELASTICARMORRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnhanceCompositeArmorRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDENHANCECOMPOSITEARMORRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnhanceStructureRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDENHANCESTRUCTURERATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnhanceNormalArmorRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDENHANCENORMALARMORRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReduceExDamagedRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDREDUCEEXDAMAGEDRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReduceBasicsDamagedRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDREDUCEBASICSDAMAGEDRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReduceWeakDamagedRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDREDUCEWEAKDAMAGEDRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWeakDamagedRatio(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDWEAKDAMAGEDRATIO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEffectiveDamagedRatio(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDEFFECTIVEDAMAGEDRATIO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNormalDamagedRatio(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDNORMALDAMAGEDRATIO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResistDamagedRatio(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ADDRESISTDAMAGEDRATIO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndObstacleStatExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_ENDOBSTACLESTATEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishObstacleStatExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_FINISHOBSTACLESTATEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedObstacleStatExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLESTATEXCEL_FINISHSIZEPREFIXEDOBSTACLESTATEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

