#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentLocationRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE74B0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETROOTASEVENTCONTENTLOCATIONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE74C0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETROOTASEVENTCONTENTLOCATIONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE7520)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AE75B0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AE7580)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1AE75D0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETLOCATIONBYTES_OFFSET UNITYSDK_OFFSET(0x1AE7610)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_SCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x1AE7630)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_ORDERINGROUP_OFFSET UNITYSDK_OFFSET(0x1AE7680)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AE76D0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_PROGRESSTEXTURE_OFFSET UNITYSDK_OFFSET(0x1AE7720)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETPROGRESSTEXTUREBYTES_OFFSET UNITYSDK_OFFSET(0x1AE7760)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_VOICEID_OFFSET UNITYSDK_OFFSET(0x1AE7780)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_VOICEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AE77E0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETVOICEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AE7820)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1AE7840)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_LOCATIONRANK_OFFSET UNITYSDK_OFFSET(0x1AE7890)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_FAVOREXP_OFFSET UNITYSDK_OFFSET(0x1AE78E0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_SECRETSTONEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AE7930)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_SECRETSTONEPROB_OFFSET UNITYSDK_OFFSET(0x1AE7980)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_EXTRAFAVOREXP_OFFSET UNITYSDK_OFFSET(0x1AE79D0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_EXTRAFAVOREXPPROB_OFFSET UNITYSDK_OFFSET(0x1AE7A20)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_EXTRAREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AE7A70)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_EXTRAREWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1AE7AD0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETEXTRAREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1AE7B10)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_EXTRAREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AE7B30)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_EXTRAREWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AE7B90)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETEXTRAREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AE7BD0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_EXTRAREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AE7BF0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_EXTRAREWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1AE7C50)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETEXTRAREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1AE7C90)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_EXTRAREWARDPROB_OFFSET UNITYSDK_OFFSET(0x1AE7CB0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_EXTRAREWARDPROBLENGTH_OFFSET UNITYSDK_OFFSET(0x1AE7D10)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETEXTRAREWARDPROBBYTES_OFFSET UNITYSDK_OFFSET(0x1AE7D50)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ISEXTRAREWARDDISPLAYED_OFFSET UNITYSDK_OFFSET(0x1AE7D70)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_ISEXTRAREWARDDISPLAYEDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AE7DD0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETISEXTRAREWARDDISPLAYEDBYTES_OFFSET UNITYSDK_OFFSET(0x1AE7E10)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AE7E30)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1AE7E90)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1AE7ED0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AE7EF0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AE7F50)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AE7F90)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AE7FB0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_REWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1AE8010)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1AE8050)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEEVENTCONTENTLOCATIONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE8070)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTEVENTCONTENTLOCATIONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE8840)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDLOCATION_OFFSET UNITYSDK_OFFSET(0x1AE87C0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDSCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x1AE8580)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDORDERINGROUP_OFFSET UNITYSDK_OFFSET(0x1AE8550)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1AE8520)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDPROGRESSTEXTURE_OFFSET UNITYSDK_OFFSET(0x1AE8790)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDVOICEID_OFFSET UNITYSDK_OFFSET(0x1AE8760)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEVOICEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE8860)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTVOICEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE88F0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1AE8730)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDLOCATIONRANK_OFFSET UNITYSDK_OFFSET(0x1AE84F0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDFAVOREXP_OFFSET UNITYSDK_OFFSET(0x1AE84C0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDSECRETSTONEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AE8490)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDSECRETSTONEPROB_OFFSET UNITYSDK_OFFSET(0x1AE8460)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDEXTRAFAVOREXP_OFFSET UNITYSDK_OFFSET(0x1AE8430)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDEXTRAFAVOREXPPROB_OFFSET UNITYSDK_OFFSET(0x1AE8400)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDEXTRAREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AE8700)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEEXTRAREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE8930)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTEXTRAREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE89C0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDEXTRAREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AE86D0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEEXTRAREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE8A00)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTEXTRAREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE8A90)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDEXTRAREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AE86A0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEEXTRAREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE8AD0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTEXTRAREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE8B60)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDEXTRAREWARDPROB_OFFSET UNITYSDK_OFFSET(0x1AE8670)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEEXTRAREWARDPROBVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE8BA0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTEXTRAREWARDPROBVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE8C30)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDISEXTRAREWARDDISPLAYED_OFFSET UNITYSDK_OFFSET(0x1AE8640)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEISEXTRAREWARDDISPLAYEDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE8C70)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTISEXTRAREWARDDISPLAYEDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE8D00)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AE8610)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE8D40)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE8DD0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1AE85E0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE8E10)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE8EA0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AE85B0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE8EE0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE8F70)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ENDEVENTCONTENTLOCATIONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE87F0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_FINISHEVENTCONTENTLOCATIONREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE8FB0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTLOCATIONREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE8FD0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentLocationRewardExcel_TypeDefinitionIndex = 17734;

	class EventContentLocationRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentLocationRewardExcel* GetRootAsEventContentLocationRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentLocationRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETROOTASEVENTCONTENTLOCATIONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentLocationRewardExcel* GetRootAsEventContentLocationRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentLocationRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentLocationRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentLocationRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETROOTASEVENTCONTENTLOCATIONREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentLocationRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentLocationRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Location()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_LOCATION_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocationBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETLOCATIONBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_ScheduleGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_SCHEDULEGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_OrderInGroup()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_ORDERINGROUP_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_ProgressTexture()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_PROGRESSTEXTURE_OFFSET))(nullptr);
		}

		Il2CppObject* GetProgressTextureBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETPROGRESSTEXTUREBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 VoiceId(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_VOICEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VoiceIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_VOICEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVoiceIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETVOICEIDBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Int64 get_LocationRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_LOCATIONRANK_OFFSET))(nullptr);
		}

		::System::Int64 get_FavorExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_FAVOREXP_OFFSET))(nullptr);
		}

		::System::Int64 get_SecretStoneAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_SECRETSTONEAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_SecretStoneProb()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_SECRETSTONEPROB_OFFSET))(nullptr);
		}

		::System::Int64 get_ExtraFavorExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_EXTRAFAVOREXP_OFFSET))(nullptr);
		}

		::System::Int64 get_ExtraFavorExpProb()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_EXTRAFAVOREXPPROB_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* ExtraRewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_EXTRAREWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExtraRewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_EXTRAREWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetExtraRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETEXTRAREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ExtraRewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_EXTRAREWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExtraRewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_EXTRAREWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetExtraRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETEXTRAREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ExtraRewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_EXTRAREWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExtraRewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_EXTRAREWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetExtraRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETEXTRAREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ExtraRewardProb(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_EXTRAREWARDPROB_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExtraRewardProbLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_EXTRAREWARDPROBLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetExtraRewardProbBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETEXTRAREWARDPROBBYTES_OFFSET))(nullptr);
		}

		::System::Boolean IsExtraRewardDisplayed(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ISEXTRAREWARDDISPLAYED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_IsExtraRewardDisplayedLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_ISEXTRAREWARDDISPLAYEDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIsExtraRewardDisplayedBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETISEXTRAREWARDDISPLAYEDBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_REWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GET_REWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_GETREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentLocationRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::UInt32 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::System::UInt32, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEEVENTCONTENTLOCATIONREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentLocationRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTEVENTCONTENTLOCATIONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddLocation(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDLOCATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScheduleGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDSCHEDULEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOrderInGroup(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDORDERINGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProgressTexture(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDPROGRESSTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDVOICEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVoiceIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEVOICEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVoiceIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTVOICEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocationRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDLOCATIONRANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFavorExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDFAVOREXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSecretStoneAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDSECRETSTONEAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSecretStoneProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDSECRETSTONEPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtraFavorExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDEXTRAFAVOREXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtraFavorExpProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDEXTRAFAVOREXPPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtraRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDEXTRAREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExtraRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEEXTRAREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExtraRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTEXTRAREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtraRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDEXTRAREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExtraRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEEXTRAREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExtraRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTEXTRAREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtraRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDEXTRAREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExtraRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEEXTRAREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExtraRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTEXTRAREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtraRewardProb(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDEXTRAREWARDPROB_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExtraRewardProbVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEEXTRAREWARDPROBVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExtraRewardProbVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTEXTRAREWARDPROBVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsExtraRewardDisplayed(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDISEXTRAREWARDDISPLAYED_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateIsExtraRewardDisplayedVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEISEXTRAREWARDDISPLAYEDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartIsExtraRewardDisplayedVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTISEXTRAREWARDDISPLAYEDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ADDREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_CREATEREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_STARTREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentLocationRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_ENDEVENTCONTENTLOCATIONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentLocationRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_FINISHEVENTCONTENTLOCATIONREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentLocationRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTLOCATIONREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

