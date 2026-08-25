#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CafeRankExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CAFERANKEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19FB450)
#define MX_DATA_EXCEL_CAFERANKEXCEL_GETROOTASCAFERANKEXCEL_OFFSET UNITYSDK_OFFSET(0x19FB460)
#define MX_DATA_EXCEL_CAFERANKEXCEL_GETROOTASCAFERANKEXCEL_OFFSET UNITYSDK_OFFSET(0x19FB4C0)
#define MX_DATA_EXCEL_CAFERANKEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19FB550)
#define MX_DATA_EXCEL_CAFERANKEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19FB520)
#define MX_DATA_EXCEL_CAFERANKEXCEL_GET_CAFEID_OFFSET UNITYSDK_OFFSET(0x19FB570)
#define MX_DATA_EXCEL_CAFERANKEXCEL_GET_RANK_OFFSET UNITYSDK_OFFSET(0x19FB5C0)
#define MX_DATA_EXCEL_CAFERANKEXCEL_GET_RECIPEID_OFFSET UNITYSDK_OFFSET(0x19FB610)
#define MX_DATA_EXCEL_CAFERANKEXCEL_GET_COMFORTMAX_OFFSET UNITYSDK_OFFSET(0x19FB660)
#define MX_DATA_EXCEL_CAFERANKEXCEL_GET_TAGCOUNTMAX_OFFSET UNITYSDK_OFFSET(0x19FB6B0)
#define MX_DATA_EXCEL_CAFERANKEXCEL_GET_CHARACTERVISITMIN_OFFSET UNITYSDK_OFFSET(0x19FB700)
#define MX_DATA_EXCEL_CAFERANKEXCEL_GET_CHARACTERVISITMAX_OFFSET UNITYSDK_OFFSET(0x19FB750)
#define MX_DATA_EXCEL_CAFERANKEXCEL_GET_CAFEVISITWEIGHTBASE_OFFSET UNITYSDK_OFFSET(0x19FB7A0)
#define MX_DATA_EXCEL_CAFERANKEXCEL_CAFEVISITWEIGHTTAGBONUSSTEP_OFFSET UNITYSDK_OFFSET(0x19FB7F0)
#define MX_DATA_EXCEL_CAFERANKEXCEL_GET_CAFEVISITWEIGHTTAGBONUSSTEPLENGTH_OFFSET UNITYSDK_OFFSET(0x19FB850)
#define MX_DATA_EXCEL_CAFERANKEXCEL_GETCAFEVISITWEIGHTTAGBONUSSTEPBYTES_OFFSET UNITYSDK_OFFSET(0x19FB890)
#define MX_DATA_EXCEL_CAFERANKEXCEL_CAFEVISITWEIGHTTAGBONUS_OFFSET UNITYSDK_OFFSET(0x19FB8B0)
#define MX_DATA_EXCEL_CAFERANKEXCEL_GET_CAFEVISITWEIGHTTAGBONUSLENGTH_OFFSET UNITYSDK_OFFSET(0x19FB910)
#define MX_DATA_EXCEL_CAFERANKEXCEL_GETCAFEVISITWEIGHTTAGBONUSBYTES_OFFSET UNITYSDK_OFFSET(0x19FB950)
#define MX_DATA_EXCEL_CAFERANKEXCEL_CREATECAFERANKEXCEL_OFFSET UNITYSDK_OFFSET(0x19FB970)
#define MX_DATA_EXCEL_CAFERANKEXCEL_STARTCAFERANKEXCEL_OFFSET UNITYSDK_OFFSET(0x19FBD70)
#define MX_DATA_EXCEL_CAFERANKEXCEL_ADDCAFEID_OFFSET UNITYSDK_OFFSET(0x19FBC00)
#define MX_DATA_EXCEL_CAFERANKEXCEL_ADDRANK_OFFSET UNITYSDK_OFFSET(0x19FBBD0)
#define MX_DATA_EXCEL_CAFERANKEXCEL_ADDRECIPEID_OFFSET UNITYSDK_OFFSET(0x19FBBA0)
#define MX_DATA_EXCEL_CAFERANKEXCEL_ADDCOMFORTMAX_OFFSET UNITYSDK_OFFSET(0x19FBB70)
#define MX_DATA_EXCEL_CAFERANKEXCEL_ADDTAGCOUNTMAX_OFFSET UNITYSDK_OFFSET(0x19FBB40)
#define MX_DATA_EXCEL_CAFERANKEXCEL_ADDCHARACTERVISITMIN_OFFSET UNITYSDK_OFFSET(0x19FBCF0)
#define MX_DATA_EXCEL_CAFERANKEXCEL_ADDCHARACTERVISITMAX_OFFSET UNITYSDK_OFFSET(0x19FBCC0)
#define MX_DATA_EXCEL_CAFERANKEXCEL_ADDCAFEVISITWEIGHTBASE_OFFSET UNITYSDK_OFFSET(0x19FBC90)
#define MX_DATA_EXCEL_CAFERANKEXCEL_ADDCAFEVISITWEIGHTTAGBONUSSTEP_OFFSET UNITYSDK_OFFSET(0x19FBC60)
#define MX_DATA_EXCEL_CAFERANKEXCEL_CREATECAFEVISITWEIGHTTAGBONUSSTEPVECTOR_OFFSET UNITYSDK_OFFSET(0x19FBD90)
#define MX_DATA_EXCEL_CAFERANKEXCEL_STARTCAFEVISITWEIGHTTAGBONUSSTEPVECTOR_OFFSET UNITYSDK_OFFSET(0x19FBE20)
#define MX_DATA_EXCEL_CAFERANKEXCEL_ADDCAFEVISITWEIGHTTAGBONUS_OFFSET UNITYSDK_OFFSET(0x19FBC30)
#define MX_DATA_EXCEL_CAFERANKEXCEL_CREATECAFEVISITWEIGHTTAGBONUSVECTOR_OFFSET UNITYSDK_OFFSET(0x19FBE60)
#define MX_DATA_EXCEL_CAFERANKEXCEL_STARTCAFEVISITWEIGHTTAGBONUSVECTOR_OFFSET UNITYSDK_OFFSET(0x19FBEF0)
#define MX_DATA_EXCEL_CAFERANKEXCEL_ENDCAFERANKEXCEL_OFFSET UNITYSDK_OFFSET(0x19FBD20)
#define MX_DATA_EXCEL_CAFERANKEXCEL_FINISHCAFERANKEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19FBF30)
#define MX_DATA_EXCEL_CAFERANKEXCEL_FINISHSIZEPREFIXEDCAFERANKEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19FBF50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CafeRankExcel_TypeDefinitionIndex = 16854;

	class CafeRankExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CafeRankExcel* GetRootAsCafeRankExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CafeRankExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_GETROOTASCAFERANKEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CafeRankExcel* GetRootAsCafeRankExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CafeRankExcel* arg)
		{
			return (return (::MX::Data::Excel::CafeRankExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CafeRankExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_GETROOTASCAFERANKEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CafeRankExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CafeRankExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_CafeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_GET_CAFEID_OFFSET))(nullptr);
		}

		::System::Int64 get_Rank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_GET_RANK_OFFSET))(nullptr);
		}

		::System::Int64 get_RecipeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_GET_RECIPEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ComfortMax()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_GET_COMFORTMAX_OFFSET))(nullptr);
		}

		::System::Int64 get_TagCountMax()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_GET_TAGCOUNTMAX_OFFSET))(nullptr);
		}

		::System::Int32 get_CharacterVisitMin()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_GET_CHARACTERVISITMIN_OFFSET))(nullptr);
		}

		::System::Int32 get_CharacterVisitMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_GET_CHARACTERVISITMAX_OFFSET))(nullptr);
		}

		::System::Int32 get_CafeVisitWeightBase()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_GET_CAFEVISITWEIGHTBASE_OFFSET))(nullptr);
		}

		::System::Int32 CafeVisitWeightTagBonusStep(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_CAFEVISITWEIGHTTAGBONUSSTEP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CafeVisitWeightTagBonusStepLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_GET_CAFEVISITWEIGHTTAGBONUSSTEPLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCafeVisitWeightTagBonusStepBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_GETCAFEVISITWEIGHTTAGBONUSSTEPBYTES_OFFSET))(nullptr);
		}

		::System::Int32 CafeVisitWeightTagBonus(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_CAFEVISITWEIGHTTAGBONUS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CafeVisitWeightTagBonusLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_GET_CAFEVISITWEIGHTTAGBONUSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCafeVisitWeightTagBonusBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_GETCAFEVISITWEIGHTTAGBONUSBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCafeRankExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_CREATECAFERANKEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCafeRankExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_STARTCAFERANKEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCafeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_ADDCAFEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_ADDRANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecipeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_ADDRECIPEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddComfortMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_ADDCOMFORTMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTagCountMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_ADDTAGCOUNTMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterVisitMin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_ADDCHARACTERVISITMIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterVisitMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_ADDCHARACTERVISITMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCafeVisitWeightBase(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_ADDCAFEVISITWEIGHTBASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCafeVisitWeightTagBonusStep(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_ADDCAFEVISITWEIGHTTAGBONUSSTEP_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCafeVisitWeightTagBonusStepVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_CREATECAFEVISITWEIGHTTAGBONUSSTEPVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCafeVisitWeightTagBonusStepVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_STARTCAFEVISITWEIGHTTAGBONUSSTEPVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCafeVisitWeightTagBonus(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_ADDCAFEVISITWEIGHTTAGBONUS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCafeVisitWeightTagBonusVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_CREATECAFEVISITWEIGHTTAGBONUSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCafeVisitWeightTagBonusVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_STARTCAFEVISITWEIGHTTAGBONUSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCafeRankExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_ENDCAFERANKEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCafeRankExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_FINISHCAFERANKEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCafeRankExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCEL_FINISHSIZEPREFIXEDCAFERANKEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

