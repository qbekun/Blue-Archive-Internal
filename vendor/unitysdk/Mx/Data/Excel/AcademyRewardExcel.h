#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class AcademyRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x198E840)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETROOTASACADEMYREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x198E850)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETROOTASACADEMYREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x198E8B0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x198E940)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x198E910)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x198E960)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETLOCATIONBYTES_OFFSET UNITYSDK_OFFSET(0x198E9A0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_SCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x198E9C0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_ORDERINGROUP_OFFSET UNITYSDK_OFFSET(0x198EA10)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x198EA60)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_PROGRESSTEXTURE_OFFSET UNITYSDK_OFFSET(0x198EAB0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETPROGRESSTEXTUREBYTES_OFFSET UNITYSDK_OFFSET(0x198EAF0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x198EB10)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_LOCATIONRANK_OFFSET UNITYSDK_OFFSET(0x198EB60)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_FAVOREXP_OFFSET UNITYSDK_OFFSET(0x198EBB0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_SECRETSTONEAMOUNT_OFFSET UNITYSDK_OFFSET(0x198EC00)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_SECRETSTONEPROB_OFFSET UNITYSDK_OFFSET(0x198EC50)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_EXTRAFAVOREXP_OFFSET UNITYSDK_OFFSET(0x198ECA0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_EXTRAFAVOREXPPROB_OFFSET UNITYSDK_OFFSET(0x198ECF0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_EXTRAREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x198ED40)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_EXTRAREWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x198EDA0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETEXTRAREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x198EDE0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_EXTRAREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x198EE00)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_EXTRAREWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x198EE60)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETEXTRAREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x198EEA0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_EXTRAREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x198EEC0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_EXTRAREWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x198EF20)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETEXTRAREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x198EF60)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_EXTRAREWARDPROB_OFFSET UNITYSDK_OFFSET(0x198EF80)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_EXTRAREWARDPROBLENGTH_OFFSET UNITYSDK_OFFSET(0x198EFE0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETEXTRAREWARDPROBBYTES_OFFSET UNITYSDK_OFFSET(0x198F020)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ISEXTRAREWARDDISPLAYED_OFFSET UNITYSDK_OFFSET(0x198F040)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_ISEXTRAREWARDDISPLAYEDLENGTH_OFFSET UNITYSDK_OFFSET(0x198F0A0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETISEXTRAREWARDDISPLAYEDBYTES_OFFSET UNITYSDK_OFFSET(0x198F0E0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x198F100)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x198F160)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x198F1A0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x198F1C0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x198F220)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x198F260)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x198F280)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_REWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x198F2E0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x198F320)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_CREATEACADEMYREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x198F340)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_STARTACADEMYREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x198FAB0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDLOCATION_OFFSET UNITYSDK_OFFSET(0x198FA30)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDSCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x198F820)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDORDERINGROUP_OFFSET UNITYSDK_OFFSET(0x198F7F0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x198F7C0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDPROGRESSTEXTURE_OFFSET UNITYSDK_OFFSET(0x198FA00)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x198F9D0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDLOCATIONRANK_OFFSET UNITYSDK_OFFSET(0x198F790)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDFAVOREXP_OFFSET UNITYSDK_OFFSET(0x198F760)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDSECRETSTONEAMOUNT_OFFSET UNITYSDK_OFFSET(0x198F730)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDSECRETSTONEPROB_OFFSET UNITYSDK_OFFSET(0x198F700)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDEXTRAFAVOREXP_OFFSET UNITYSDK_OFFSET(0x198F6D0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDEXTRAFAVOREXPPROB_OFFSET UNITYSDK_OFFSET(0x198F6A0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDEXTRAREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x198F9A0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_CREATEEXTRAREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x198FAD0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_STARTEXTRAREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x198FB60)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDEXTRAREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x198F970)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_CREATEEXTRAREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x198FBA0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_STARTEXTRAREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x198FC30)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDEXTRAREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x198F940)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_CREATEEXTRAREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x198FC70)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_STARTEXTRAREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x198FD00)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDEXTRAREWARDPROB_OFFSET UNITYSDK_OFFSET(0x198F910)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_CREATEEXTRAREWARDPROBVECTOR_OFFSET UNITYSDK_OFFSET(0x198FD40)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_STARTEXTRAREWARDPROBVECTOR_OFFSET UNITYSDK_OFFSET(0x198FDD0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDISEXTRAREWARDDISPLAYED_OFFSET UNITYSDK_OFFSET(0x198F8E0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_CREATEISEXTRAREWARDDISPLAYEDVECTOR_OFFSET UNITYSDK_OFFSET(0x198FE10)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_STARTISEXTRAREWARDDISPLAYEDVECTOR_OFFSET UNITYSDK_OFFSET(0x198FEA0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x198F8B0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x198FEE0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x198FF70)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x198F880)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x198FFB0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1990040)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x198F850)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_CREATEREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1990080)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_STARTREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1990110)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ENDACADEMYREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x198FA60)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_FINISHACADEMYREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1990150)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCEL_FINISHSIZEPREFIXEDACADEMYREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1990170)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AcademyRewardExcel_TypeDefinitionIndex = 16592;

	class AcademyRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::AcademyRewardExcel* GetRootAsAcademyRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AcademyRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETROOTASACADEMYREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::AcademyRewardExcel* GetRootAsAcademyRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::AcademyRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::AcademyRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::AcademyRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETROOTASACADEMYREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::AcademyRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AcademyRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Location()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_LOCATION_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocationBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETLOCATIONBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_ScheduleGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_SCHEDULEGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_OrderInGroup()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_ORDERINGROUP_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_ProgressTexture()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_PROGRESSTEXTURE_OFFSET))(nullptr);
		}

		Il2CppObject* GetProgressTextureBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETPROGRESSTEXTUREBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Int64 get_LocationRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_LOCATIONRANK_OFFSET))(nullptr);
		}

		::System::Int64 get_FavorExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_FAVOREXP_OFFSET))(nullptr);
		}

		::System::Int64 get_SecretStoneAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_SECRETSTONEAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_SecretStoneProb()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_SECRETSTONEPROB_OFFSET))(nullptr);
		}

		::System::Int64 get_ExtraFavorExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_EXTRAFAVOREXP_OFFSET))(nullptr);
		}

		::System::Int64 get_ExtraFavorExpProb()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_EXTRAFAVOREXPPROB_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* ExtraRewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_EXTRAREWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExtraRewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_EXTRAREWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetExtraRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETEXTRAREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ExtraRewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_EXTRAREWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExtraRewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_EXTRAREWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetExtraRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETEXTRAREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ExtraRewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_EXTRAREWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExtraRewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_EXTRAREWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetExtraRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETEXTRAREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ExtraRewardProb(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_EXTRAREWARDPROB_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExtraRewardProbLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_EXTRAREWARDPROBLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetExtraRewardProbBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETEXTRAREWARDPROBBYTES_OFFSET))(nullptr);
		}

		::System::Boolean IsExtraRewardDisplayed(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ISEXTRAREWARDDISPLAYED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_IsExtraRewardDisplayedLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_ISEXTRAREWARDDISPLAYEDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIsExtraRewardDisplayedBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETISEXTRAREWARDDISPLAYEDBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_REWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GET_REWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_GETREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAcademyRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::UInt32, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_CREATEACADEMYREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartAcademyRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_STARTACADEMYREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddLocation(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDLOCATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScheduleGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDSCHEDULEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOrderInGroup(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDORDERINGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProgressTexture(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDPROGRESSTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocationRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDLOCATIONRANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFavorExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDFAVOREXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSecretStoneAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDSECRETSTONEAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSecretStoneProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDSECRETSTONEPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtraFavorExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDEXTRAFAVOREXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtraFavorExpProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDEXTRAFAVOREXPPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtraRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDEXTRAREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExtraRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_CREATEEXTRAREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExtraRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_STARTEXTRAREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtraRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDEXTRAREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExtraRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_CREATEEXTRAREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExtraRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_STARTEXTRAREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtraRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDEXTRAREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExtraRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_CREATEEXTRAREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExtraRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_STARTEXTRAREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtraRewardProb(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDEXTRAREWARDPROB_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExtraRewardProbVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_CREATEEXTRAREWARDPROBVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExtraRewardProbVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_STARTEXTRAREWARDPROBVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsExtraRewardDisplayed(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDISEXTRAREWARDDISPLAYED_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateIsExtraRewardDisplayedVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_CREATEISEXTRAREWARDDISPLAYEDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartIsExtraRewardDisplayedVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_STARTISEXTRAREWARDDISPLAYEDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ADDREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_CREATEREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_STARTREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndAcademyRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_ENDACADEMYREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAcademyRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_FINISHACADEMYREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedAcademyRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCEL_FINISHSIZEPREFIXEDACADEMYREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

