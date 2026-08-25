#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ConquestGroupBonusExcel; }
namespace FlatData { class School; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A5BAA0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETROOTASCONQUESTGROUPBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A5BAB0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETROOTASCONQUESTGROUPBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A5BB10)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A5BBA0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A5BB70)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_CONQUESTBONUSID_OFFSET UNITYSDK_OFFSET(0x1A5BBC0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_SCHOOL_OFFSET UNITYSDK_OFFSET(0x1A5BC10)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_SCHOOLLENGTH_OFFSET UNITYSDK_OFFSET(0x1A5BC70)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETSCHOOLBYTES_OFFSET UNITYSDK_OFFSET(0x1A5BCB0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_RECOMMANDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1A5BCD0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_BONUSPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A5BD20)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_BONUSPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1A5BD80)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETBONUSPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1A5BDC0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_BONUSID_OFFSET UNITYSDK_OFFSET(0x1A5BDE0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_BONUSIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A5BE40)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETBONUSIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A5BE80)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_BONUSCHARACTERCOUNT1_OFFSET UNITYSDK_OFFSET(0x1A5BEA0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_BONUSCHARACTERCOUNT1LENGTH_OFFSET UNITYSDK_OFFSET(0x1A5BF00)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETBONUSCHARACTERCOUNT1BYTES_OFFSET UNITYSDK_OFFSET(0x1A5BF40)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_BONUSPERCENTAGE1_OFFSET UNITYSDK_OFFSET(0x1A5BF60)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_BONUSPERCENTAGE1LENGTH_OFFSET UNITYSDK_OFFSET(0x1A5BFC0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETBONUSPERCENTAGE1BYTES_OFFSET UNITYSDK_OFFSET(0x1A5C000)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_BONUSCHARACTERCOUNT2_OFFSET UNITYSDK_OFFSET(0x1A5C020)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_BONUSCHARACTERCOUNT2LENGTH_OFFSET UNITYSDK_OFFSET(0x1A5C080)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETBONUSCHARACTERCOUNT2BYTES_OFFSET UNITYSDK_OFFSET(0x1A5C0C0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_BONUSPERCENTAGE2_OFFSET UNITYSDK_OFFSET(0x1A5C0E0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_BONUSPERCENTAGE2LENGTH_OFFSET UNITYSDK_OFFSET(0x1A5C140)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETBONUSPERCENTAGE2BYTES_OFFSET UNITYSDK_OFFSET(0x1A5C180)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_BONUSCHARACTERCOUNT3_OFFSET UNITYSDK_OFFSET(0x1A5C1A0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_BONUSCHARACTERCOUNT3LENGTH_OFFSET UNITYSDK_OFFSET(0x1A5C200)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETBONUSCHARACTERCOUNT3BYTES_OFFSET UNITYSDK_OFFSET(0x1A5C240)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_BONUSPERCENTAGE3_OFFSET UNITYSDK_OFFSET(0x1A5C260)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_BONUSPERCENTAGE3LENGTH_OFFSET UNITYSDK_OFFSET(0x1A5C2C0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETBONUSPERCENTAGE3BYTES_OFFSET UNITYSDK_OFFSET(0x1A5C300)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATECONQUESTGROUPBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A5C320)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTCONQUESTGROUPBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A5C770)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDCONQUESTBONUSID_OFFSET UNITYSDK_OFFSET(0x1A5C510)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDSCHOOL_OFFSET UNITYSDK_OFFSET(0x1A5C6F0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATESCHOOLVECTOR_OFFSET UNITYSDK_OFFSET(0x1A5C790)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTSCHOOLVECTOR_OFFSET UNITYSDK_OFFSET(0x1A5C820)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDRECOMMANDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1A5C6C0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDBONUSPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A5C690)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATEBONUSPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A5C860)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTBONUSPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A5C8F0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDBONUSID_OFFSET UNITYSDK_OFFSET(0x1A5C660)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATEBONUSIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A5C930)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTBONUSIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A5C9C0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDBONUSCHARACTERCOUNT1_OFFSET UNITYSDK_OFFSET(0x1A5C630)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATEBONUSCHARACTERCOUNT1VECTOR_OFFSET UNITYSDK_OFFSET(0x1A5CA00)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTBONUSCHARACTERCOUNT1VECTOR_OFFSET UNITYSDK_OFFSET(0x1A5CA90)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDBONUSPERCENTAGE1_OFFSET UNITYSDK_OFFSET(0x1A5C600)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATEBONUSPERCENTAGE1VECTOR_OFFSET UNITYSDK_OFFSET(0x1A5CAD0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTBONUSPERCENTAGE1VECTOR_OFFSET UNITYSDK_OFFSET(0x1A5CB60)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDBONUSCHARACTERCOUNT2_OFFSET UNITYSDK_OFFSET(0x1A5C5D0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATEBONUSCHARACTERCOUNT2VECTOR_OFFSET UNITYSDK_OFFSET(0x1A5CBA0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTBONUSCHARACTERCOUNT2VECTOR_OFFSET UNITYSDK_OFFSET(0x1A5CC30)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDBONUSPERCENTAGE2_OFFSET UNITYSDK_OFFSET(0x1A5C5A0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATEBONUSPERCENTAGE2VECTOR_OFFSET UNITYSDK_OFFSET(0x1A5CC70)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTBONUSPERCENTAGE2VECTOR_OFFSET UNITYSDK_OFFSET(0x1A5CD00)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDBONUSCHARACTERCOUNT3_OFFSET UNITYSDK_OFFSET(0x1A5C570)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATEBONUSCHARACTERCOUNT3VECTOR_OFFSET UNITYSDK_OFFSET(0x1A5CD40)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTBONUSCHARACTERCOUNT3VECTOR_OFFSET UNITYSDK_OFFSET(0x1A5CDD0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDBONUSPERCENTAGE3_OFFSET UNITYSDK_OFFSET(0x1A5C540)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATEBONUSPERCENTAGE3VECTOR_OFFSET UNITYSDK_OFFSET(0x1A5CE10)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTBONUSPERCENTAGE3VECTOR_OFFSET UNITYSDK_OFFSET(0x1A5CEA0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ENDCONQUESTGROUPBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A5C720)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_FINISHCONQUESTGROUPBONUSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A5CEE0)
#define MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_FINISHSIZEPREFIXEDCONQUESTGROUPBONUSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A5CF00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestGroupBonusExcel_TypeDefinitionIndex = 17233;

	class ConquestGroupBonusExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestGroupBonusExcel* GetRootAsConquestGroupBonusExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestGroupBonusExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETROOTASCONQUESTGROUPBONUSEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ConquestGroupBonusExcel* GetRootAsConquestGroupBonusExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ConquestGroupBonusExcel* arg)
		{
			return (return (::MX::Data::Excel::ConquestGroupBonusExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ConquestGroupBonusExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETROOTASCONQUESTGROUPBONUSEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ConquestGroupBonusExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestGroupBonusExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ConquestBonusId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_CONQUESTBONUSID_OFFSET))(nullptr);
		}

		::FlatData::School* School(::System::Int32 arg)
		{
			return (return (::FlatData::School*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_SCHOOL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SchoolLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_SCHOOLLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSchoolBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETSCHOOLBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_RecommandLocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_RECOMMANDLOCALIZEETCID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* BonusParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_BONUSPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BonusParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_BONUSPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBonusParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETBONUSPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 BonusId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_BONUSID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BonusIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_BONUSIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBonusIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETBONUSIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 BonusCharacterCount1(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_BONUSCHARACTERCOUNT1_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BonusCharacterCount1Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_BONUSCHARACTERCOUNT1LENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBonusCharacterCount1Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETBONUSCHARACTERCOUNT1BYTES_OFFSET))(nullptr);
		}

		::System::Int64 BonusPercentage1(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_BONUSPERCENTAGE1_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BonusPercentage1Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_BONUSPERCENTAGE1LENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBonusPercentage1Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETBONUSPERCENTAGE1BYTES_OFFSET))(nullptr);
		}

		::System::Int32 BonusCharacterCount2(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_BONUSCHARACTERCOUNT2_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BonusCharacterCount2Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_BONUSCHARACTERCOUNT2LENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBonusCharacterCount2Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETBONUSCHARACTERCOUNT2BYTES_OFFSET))(nullptr);
		}

		::System::Int64 BonusPercentage2(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_BONUSPERCENTAGE2_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BonusPercentage2Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_BONUSPERCENTAGE2LENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBonusPercentage2Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETBONUSPERCENTAGE2BYTES_OFFSET))(nullptr);
		}

		::System::Int32 BonusCharacterCount3(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_BONUSCHARACTERCOUNT3_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BonusCharacterCount3Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_BONUSCHARACTERCOUNT3LENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBonusCharacterCount3Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETBONUSCHARACTERCOUNT3BYTES_OFFSET))(nullptr);
		}

		::System::Int64 BonusPercentage3(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_BONUSPERCENTAGE3_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BonusPercentage3Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GET_BONUSPERCENTAGE3LENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBonusPercentage3Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_GETBONUSPERCENTAGE3BYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConquestGroupBonusExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::UInt32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::UInt32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATECONQUESTGROUPBONUSEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartConquestGroupBonusExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTCONQUESTGROUPBONUSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddConquestBonusId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDCONQUESTBONUSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSchool(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDSCHOOL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSchoolVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATESCHOOLVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSchoolVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTSCHOOLVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecommandLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDRECOMMANDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBonusParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDBONUSPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBonusParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATEBONUSPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBonusParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTBONUSPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBonusId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDBONUSID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBonusIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATEBONUSIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBonusIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTBONUSIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBonusCharacterCount1(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDBONUSCHARACTERCOUNT1_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBonusCharacterCount1Vector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATEBONUSCHARACTERCOUNT1VECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBonusCharacterCount1Vector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTBONUSCHARACTERCOUNT1VECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBonusPercentage1(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDBONUSPERCENTAGE1_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBonusPercentage1Vector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATEBONUSPERCENTAGE1VECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBonusPercentage1Vector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTBONUSPERCENTAGE1VECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBonusCharacterCount2(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDBONUSCHARACTERCOUNT2_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBonusCharacterCount2Vector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATEBONUSCHARACTERCOUNT2VECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBonusCharacterCount2Vector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTBONUSCHARACTERCOUNT2VECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBonusPercentage2(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDBONUSPERCENTAGE2_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBonusPercentage2Vector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATEBONUSPERCENTAGE2VECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBonusPercentage2Vector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTBONUSPERCENTAGE2VECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBonusCharacterCount3(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDBONUSCHARACTERCOUNT3_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBonusCharacterCount3Vector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATEBONUSCHARACTERCOUNT3VECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBonusCharacterCount3Vector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTBONUSCHARACTERCOUNT3VECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBonusPercentage3(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ADDBONUSPERCENTAGE3_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBonusPercentage3Vector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_CREATEBONUSPERCENTAGE3VECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBonusPercentage3Vector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_STARTBONUSPERCENTAGE3VECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndConquestGroupBonusExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_ENDCONQUESTGROUPBONUSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConquestGroupBonusExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_FINISHCONQUESTGROUPBONUSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedConquestGroupBonusExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBONUSEXCEL_FINISHSIZEPREFIXEDCONQUESTGROUPBONUSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

