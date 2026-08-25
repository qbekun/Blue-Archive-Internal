#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class StickerPageContentExcel; }
namespace FlatData { class StickerGetConditionType; }
namespace FlatData { class StickerCheckPassType; }
namespace FlatData { class GetStickerConditionType; }
namespace FlatData { class Tag; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C958E0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GETROOTASSTICKERPAGECONTENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C958F0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GETROOTASSTICKERPAGECONTENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C95950)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C959E0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C959B0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C95A00)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_STICKERGROUPID_OFFSET UNITYSDK_OFFSET(0x1C95A50)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_STICKERPAGEID_OFFSET UNITYSDK_OFFSET(0x1C95AA0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_STICKERSLOT_OFFSET UNITYSDK_OFFSET(0x1C95AF0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_STICKERGETCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C95B40)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_STICKERCHECKPASSTYPE_OFFSET UNITYSDK_OFFSET(0x1C95B90)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_GETSTICKERCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C95BE0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_STICKERGETCONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1C95C30)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_STICKERGETCONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1C95C80)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_STICKERGETCONDITIONPARAMETERLENGTH_OFFSET UNITYSDK_OFFSET(0x1C95CE0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GETSTICKERGETCONDITIONPARAMETERBYTES_OFFSET UNITYSDK_OFFSET(0x1C95D20)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_STICKERGETCONDITIONPARAMETERTAG_OFFSET UNITYSDK_OFFSET(0x1C95D40)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_STICKERGETCONDITIONPARAMETERTAGLENGTH_OFFSET UNITYSDK_OFFSET(0x1C95DA0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GETSTICKERGETCONDITIONPARAMETERTAGBYTES_OFFSET UNITYSDK_OFFSET(0x1C95DE0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_PACKEDSTICKERICONLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1C95E00)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_PACKEDSTICKERICONPATH_OFFSET UNITYSDK_OFFSET(0x1C95E50)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GETPACKEDSTICKERICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C95E90)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C95EB0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GETICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C95EF0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_STICKERDETAILPATH_OFFSET UNITYSDK_OFFSET(0x1C95F10)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GETSTICKERDETAILPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C95F50)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_CREATESTICKERPAGECONTENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C95F70)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_STARTSTICKERPAGECONTENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C964D0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C962A0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDSTICKERGROUPID_OFFSET UNITYSDK_OFFSET(0x1C96270)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDSTICKERPAGEID_OFFSET UNITYSDK_OFFSET(0x1C96240)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDSTICKERSLOT_OFFSET UNITYSDK_OFFSET(0x1C96210)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDSTICKERGETCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C96450)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDSTICKERCHECKPASSTYPE_OFFSET UNITYSDK_OFFSET(0x1C96420)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDGETSTICKERCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C963F0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDSTICKERGETCONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1C961E0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDSTICKERGETCONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1C963C0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_CREATESTICKERGETCONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1C964F0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_STARTSTICKERGETCONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1C96580)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDSTICKERGETCONDITIONPARAMETERTAG_OFFSET UNITYSDK_OFFSET(0x1C96390)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_CREATESTICKERGETCONDITIONPARAMETERTAGVECTOR_OFFSET UNITYSDK_OFFSET(0x1C965C0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_STARTSTICKERGETCONDITIONPARAMETERTAGVECTOR_OFFSET UNITYSDK_OFFSET(0x1C96650)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDPACKEDSTICKERICONLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1C96360)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDPACKEDSTICKERICONPATH_OFFSET UNITYSDK_OFFSET(0x1C96330)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDICONPATH_OFFSET UNITYSDK_OFFSET(0x1C96300)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDSTICKERDETAILPATH_OFFSET UNITYSDK_OFFSET(0x1C962D0)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ENDSTICKERPAGECONTENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C96480)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_FINISHSTICKERPAGECONTENTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C96690)
#define MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_FINISHSIZEPREFIXEDSTICKERPAGECONTENTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C966B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int StickerPageContentExcel_TypeDefinitionIndex = 19544;

	class StickerPageContentExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::StickerPageContentExcel* GetRootAsStickerPageContentExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::StickerPageContentExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GETROOTASSTICKERPAGECONTENTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::StickerPageContentExcel* GetRootAsStickerPageContentExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::StickerPageContentExcel* arg)
		{
			return (return (::MX::Data::Excel::StickerPageContentExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::StickerPageContentExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GETROOTASSTICKERPAGECONTENTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::StickerPageContentExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::StickerPageContentExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_StickerGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_STICKERGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_StickerPageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_STICKERPAGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_StickerSlot()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_STICKERSLOT_OFFSET))(nullptr);
		}

		::FlatData::StickerGetConditionType* get_StickerGetConditionType()
		{
			return (return (::FlatData::StickerGetConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_STICKERGETCONDITIONTYPE_OFFSET))(nullptr);
		}

		::FlatData::StickerCheckPassType* get_StickerCheckPassType()
		{
			return (return (::FlatData::StickerCheckPassType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_STICKERCHECKPASSTYPE_OFFSET))(nullptr);
		}

		::FlatData::GetStickerConditionType* get_GetStickerConditionType()
		{
			return (return (::FlatData::GetStickerConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_GETSTICKERCONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_StickerGetConditionCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_STICKERGETCONDITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 StickerGetConditionParameter(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_STICKERGETCONDITIONPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StickerGetConditionParameterLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_STICKERGETCONDITIONPARAMETERLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStickerGetConditionParameterBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GETSTICKERGETCONDITIONPARAMETERBYTES_OFFSET))(nullptr);
		}

		::FlatData::Tag* StickerGetConditionParameterTag(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_STICKERGETCONDITIONPARAMETERTAG_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StickerGetConditionParameterTagLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_STICKERGETCONDITIONPARAMETERTAGLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStickerGetConditionParameterTagBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GETSTICKERGETCONDITIONPARAMETERTAGBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_PackedStickerIconLocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_PACKEDSTICKERICONLOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::String* get_PackedStickerIconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_PACKEDSTICKERICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPackedStickerIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GETPACKEDSTICKERICONPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_ICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GETICONPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StickerDetailPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GET_STICKERDETAILPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStickerDetailPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_GETSTICKERDETAILPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateStickerPageContentExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::StickerGetConditionType* arg, ::FlatData::StickerCheckPassType* arg, ::FlatData::GetStickerConditionType* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::StickerGetConditionType*, ::FlatData::StickerCheckPassType*, ::FlatData::GetStickerConditionType*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_CREATESTICKERPAGECONTENTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartStickerPageContentExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_STARTSTICKERPAGECONTENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStickerGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDSTICKERGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStickerPageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDSTICKERPAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStickerSlot(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDSTICKERSLOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStickerGetConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StickerGetConditionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StickerGetConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDSTICKERGETCONDITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStickerCheckPassType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StickerCheckPassType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StickerCheckPassType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDSTICKERCHECKPASSTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGetStickerConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::GetStickerConditionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::GetStickerConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDGETSTICKERCONDITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStickerGetConditionCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDSTICKERGETCONDITIONCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStickerGetConditionParameter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDSTICKERGETCONDITIONPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStickerGetConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_CREATESTICKERGETCONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStickerGetConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_STARTSTICKERGETCONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStickerGetConditionParameterTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDSTICKERGETCONDITIONPARAMETERTAG_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStickerGetConditionParameterTagVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_CREATESTICKERGETCONDITIONPARAMETERTAGVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStickerGetConditionParameterTagVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_STARTSTICKERGETCONDITIONPARAMETERTAGVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPackedStickerIconLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDPACKEDSTICKERICONLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPackedStickerIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDPACKEDSTICKERICONPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDICONPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStickerDetailPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ADDSTICKERDETAILPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndStickerPageContentExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_ENDSTICKERPAGECONTENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishStickerPageContentExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_FINISHSTICKERPAGECONTENTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedStickerPageContentExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERPAGECONTENTEXCEL_FINISHSIZEPREFIXEDSTICKERPAGECONTENTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

