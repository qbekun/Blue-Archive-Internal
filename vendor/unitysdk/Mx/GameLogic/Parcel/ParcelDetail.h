#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::GameLogic::Parcel { class ParcelChangeType; }

#define MX_GAMELOGIC_PARCEL_PARCELDETAIL_GET_ORIGINPARCEL_OFFSET UNITYSDK_OFFSET(0xFDC900)
#define MX_GAMELOGIC_PARCEL_PARCELDETAIL_SET_ORIGINPARCEL_OFFSET UNITYSDK_OFFSET(0xFDC910)
#define MX_GAMELOGIC_PARCEL_PARCELDETAIL_GET_MAILSENDPARCEL_OFFSET UNITYSDK_OFFSET(0xFDC920)
#define MX_GAMELOGIC_PARCEL_PARCELDETAIL_SET_MAILSENDPARCEL_OFFSET UNITYSDK_OFFSET(0xFDC930)
#define MX_GAMELOGIC_PARCEL_PARCELDETAIL_GET_CONVERTEDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFDC940)
#define MX_GAMELOGIC_PARCEL_PARCELDETAIL_SET_CONVERTEDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFDC950)
#define MX_GAMELOGIC_PARCEL_PARCELDETAIL_GET_PARCELCHANGETYPE_OFFSET UNITYSDK_OFFSET(0xFDC960)
#define MX_GAMELOGIC_PARCEL_PARCELDETAIL_SET_PARCELCHANGETYPE_OFFSET UNITYSDK_OFFSET(0xFDC970)
#define MX_GAMELOGIC_PARCEL_PARCELDETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDC980)
#define MX_GAMELOGIC_PARCEL_PARCELDETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDCA80)
#define MX_GAMELOGIC_PARCEL_PARCELDETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDCB20)

namespace MX::GameLogic::Parcel
{
	inline static constexpr unsigned int ParcelDetail_TypeDefinitionIndex = 12438;

	class ParcelDetail : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelInfo* _OriginParcel_k__BackingField; // 0x10
		::MX::GameLogic::Parcel::ParcelInfo* _MailSendParcel_k__BackingField; // 0x18
		Il2CppObject* _ConvertedParcelInfos_k__BackingField; // 0x20
		::MX::GameLogic::Parcel::ParcelChangeType* _ParcelChangeType_k__BackingField; // 0x28

		::MX::GameLogic::Parcel::ParcelInfo* get_OriginParcel()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELDETAIL_GET_ORIGINPARCEL_OFFSET))(nullptr);
		}

		::System::Void set_OriginParcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELDETAIL_SET_ORIGINPARCEL_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_MailSendParcel()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELDETAIL_GET_MAILSENDPARCEL_OFFSET))(nullptr);
		}

		::System::Void set_MailSendParcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELDETAIL_SET_MAILSENDPARCEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ConvertedParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELDETAIL_GET_CONVERTEDPARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void set_ConvertedParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELDETAIL_SET_CONVERTEDPARCELINFOS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelChangeType* get_ParcelChangeType()
		{
			return ((::MX::GameLogic::Parcel::ParcelChangeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELDETAIL_GET_PARCELCHANGETYPE_OFFSET))(nullptr);
		}

		::System::Void set_ParcelChangeType(::MX::GameLogic::Parcel::ParcelChangeType* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELDETAIL_SET_PARCELCHANGETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::ParcelInfo* arg, Il2CppObject* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELDETAIL_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELDETAIL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELDETAIL_.CTOR_OFFSET))(nullptr);
		}

	};
}

