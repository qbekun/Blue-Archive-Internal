#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define MINIGAMEMISSIONREWARDRESPONSEMESSAGE_GET_MISISONID_OFFSET UNITYSDK_OFFSET(0x1F83C00)
#define MINIGAMEMISSIONREWARDRESPONSEMESSAGE_SET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0x1F83C10)
#define MINIGAMEMISSIONREWARDRESPONSEMESSAGE_GET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0x1F83C20)
#define MINIGAMEMISSIONREWARDRESPONSEMESSAGE_SET_MISISONID_OFFSET UNITYSDK_OFFSET(0x1F83C30)
#define MINIGAMEMISSIONREWARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F838C0)

	inline static constexpr unsigned int MiniGameMissionRewardResponseMessage_TypeDefinitionIndex = 2628;

	class MiniGameMissionRewardResponseMessage : public Il2CppObject
	{
	public:
		::System::Int64 _MisisonId_k__BackingField; // 0x20
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResult_k__BackingField; // 0x28

		::System::Int64 get_MisisonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONREWARDRESPONSEMESSAGE_GET_MISISONID_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResult(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONREWARDRESPONSEMESSAGE_SET_PARCELRESULT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResult()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONREWARDRESPONSEMESSAGE_GET_PARCELRESULT_OFFSET))(nullptr);
		}

		::System::Void set_MisisonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONREWARDRESPONSEMESSAGE_SET_MISISONID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelResultDB* arg2)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONREWARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

