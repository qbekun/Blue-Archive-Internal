#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class AcademyLocationExcel; }
namespace FlatData { class School; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1988D20)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GETROOTASACADEMYLOCATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1988D30)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GETROOTASACADEMYLOCATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1988D90)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1988E20)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1988DF0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1988E40)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1988E90)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1988EE0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GETPREFABPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1988F20)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_ICONIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1988F40)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GETICONIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1988F80)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_OPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1988FA0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_OPENCONDITIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1989000)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GETOPENCONDITIONBYTES_OFFSET UNITYSDK_OFFSET(0x1989040)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_OPENCONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1989060)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_OPENCONDITIONCOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x19890C0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GETOPENCONDITIONCOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1989100)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1989120)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1989170)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_OPENTEACHERRANK_OFFSET UNITYSDK_OFFSET(0x19891C0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_CREATEACADEMYLOCATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1989210)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_STARTACADEMYLOCATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19895B0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1989410)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1989530)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ADDPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1989500)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ADDICONIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19894D0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ADDOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x19894A0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_CREATEOPENCONDITIONVECTOR_OFFSET UNITYSDK_OFFSET(0x19895D0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_STARTOPENCONDITIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1989660)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ADDOPENCONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1989470)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_CREATEOPENCONDITIONCOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x19896A0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_STARTOPENCONDITIONCOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1989730)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1989440)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x19893E0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ADDOPENTEACHERRANK_OFFSET UNITYSDK_OFFSET(0x19893B0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ENDACADEMYLOCATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1989560)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_FINISHACADEMYLOCATIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1989770)
#define MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_FINISHSIZEPREFIXEDACADEMYLOCATIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1989790)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AcademyLocationExcel_TypeDefinitionIndex = 16565;

	class AcademyLocationExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::AcademyLocationExcel* GetRootAsAcademyLocationExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AcademyLocationExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GETROOTASACADEMYLOCATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::AcademyLocationExcel* GetRootAsAcademyLocationExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::AcademyLocationExcel* arg)
		{
			return (return (::MX::Data::Excel::AcademyLocationExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::AcademyLocationExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GETROOTASACADEMYLOCATIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::AcademyLocationExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AcademyLocationExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::String* get_PrefabPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_PREFABPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GETPREFABPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_IconImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_ICONIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GETICONIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::FlatData::School* OpenCondition(::System::Int32 arg)
		{
			return (return (::FlatData::School*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_OPENCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_OpenConditionLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_OPENCONDITIONLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetOpenConditionBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GETOPENCONDITIONBYTES_OFFSET))(nullptr);
		}

		::System::Int64 OpenConditionCount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_OPENCONDITIONCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_OpenConditionCountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_OPENCONDITIONCOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetOpenConditionCountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GETOPENCONDITIONCOUNTBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_REWARDPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenTeacherRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_GET_OPENTEACHERRANK_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAcademyLocationExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_CREATEACADEMYLOCATIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartAcademyLocationExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_STARTACADEMYLOCATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrefabPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ADDPREFABPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ADDICONIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenCondition(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ADDOPENCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateOpenConditionVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_CREATEOPENCONDITIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartOpenConditionVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_STARTOPENCONDITIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenConditionCount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ADDOPENCONDITIONCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateOpenConditionCountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_CREATEOPENCONDITIONCOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartOpenConditionCountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_STARTOPENCONDITIONCOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenTeacherRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ADDOPENTEACHERRANK_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndAcademyLocationExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_ENDACADEMYLOCATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAcademyLocationExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_FINISHACADEMYLOCATIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedAcademyLocationExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONEXCEL_FINISHSIZEPREFIXEDACADEMYLOCATIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

