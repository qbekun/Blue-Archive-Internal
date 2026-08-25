#pragma once
#include "unitysdk.h"

namespace MX::Data { class ManagementBannerData; }
namespace UnityEngine { class Coroutine; }
namespace MX::Data { class EventContentSeasonInfo; }
namespace UnityEngine { class Texture2D; }

#define LOBBYEVENTBASE_SET_BANNERDATA_OFFSET UNITYSDK_OFFSET(0x263CDA0)
#define LOBBYEVENTBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x263CDB0)
#define LOBBYEVENTBASE_GET_EVENTIMAGE_OFFSET UNITYSDK_OFFSET(0x263CEB0)
#define LOBBYEVENTBASE_GET_BANNERDATA_OFFSET UNITYSDK_OFFSET(0x263CFE0)
#define LOBBYEVENTBASE_SET_EVENTIMAGE_OFFSET UNITYSDK_OFFSET(0x263CFF0)
#define LOBBYEVENTBASE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x263D000)
#define LOBBYEVENTBASE_SET_IMAGENAMEHASH_OFFSET UNITYSDK_OFFSET(0x263D090)
#define LOBBYEVENTBASE_CODOWNLOADIMAGE_OFFSET UNITYSDK_OFFSET(0x263D0A0)
#define LOBBYEVENTBASE_SAVEIMAGE_OFFSET UNITYSDK_OFFSET(0x263D160)
#define LOBBYEVENTBASE_SET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x263D330)
#define LOBBYEVENTBASE_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x263D340)
#define LOBBYEVENTBASE_DOWNLOADIMAGE_OFFSET UNITYSDK_OFFSET(0x263D350)
#define LOBBYEVENTBASE_CLEAREVENTIMAGEPOOL_OFFSET UNITYSDK_OFFSET(0x263D7E0)
#define LOBBYEVENTBASE_LOADIMAGE_OFFSET UNITYSDK_OFFSET(0x263D410)
#define LOBBYEVENTBASE_GET_IMAGENAMEHASH_OFFSET UNITYSDK_OFFSET(0x263D870)

	inline static constexpr unsigned int LobbyEventBase_TypeDefinitionIndex = 6592;

	class LobbyEventBase : public Il2CppObject
	{
	public:
		::System::String* DIRECTORY_NAME; // 0x0
		::MX::Data::ManagementBannerData* _BannerData_k__BackingField; // 0x10
		Il2CppObject* eventImagePool; // 0x0
		::System::UInt32 _ImageNameHash_k__BackingField; // 0x18
		::UnityEngine::Coroutine* DownloadImageCoroutine; // 0x20
		::MX::Data::EventContentSeasonInfo* _SeasonInfo_k__BackingField; // 0x28

		::System::Void set_BannerData(::MX::Data::ManagementBannerData* arg)
		{
			((::System::Void(*)(::MX::Data::ManagementBannerData*, ::PVOID))((::PBYTE)hIl2Cpp + LOBBYEVENTBASE_SET_BANNERDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::ManagementBannerData* arg, ::System::UInt32 arg2)
		{
			((::System::Void(*)(::MX::Data::ManagementBannerData*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + LOBBYEVENTBASE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Texture2D* get_EventImage()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBBYEVENTBASE_GET_EVENTIMAGE_OFFSET))(nullptr);
		}

		::MX::Data::ManagementBannerData* get_BannerData()
		{
			return ((::MX::Data::ManagementBannerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBBYEVENTBASE_GET_BANNERDATA_OFFSET))(nullptr);
		}

		::System::Void set_EventImage(::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + LOBBYEVENTBASE_SET_EVENTIMAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBBYEVENTBASE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void set_ImageNameHash(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + LOBBYEVENTBASE_SET_IMAGENAMEHASH_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoDownloadImage(::System::String* str, Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LOBBYEVENTBASE_CODOWNLOADIMAGE_OFFSET))(str, arg, nullptr);
		}

		::System::Void SaveImage(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + LOBBYEVENTBASE_SAVEIMAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonInfo(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + LOBBYEVENTBASE_SET_SEASONINFO_OFFSET))(arg, nullptr);
		}

		::MX::Data::EventContentSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::EventContentSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBBYEVENTBASE_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void DownloadImage(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LOBBYEVENTBASE_DOWNLOADIMAGE_OFFSET))(str, arg, nullptr);
		}

		::System::Void ClearEventImagePool()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBBYEVENTBASE_CLEAREVENTIMAGEPOOL_OFFSET))(nullptr);
		}

		::System::Boolean LoadImage(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LOBBYEVENTBASE_LOADIMAGE_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_ImageNameHash()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBBYEVENTBASE_GET_IMAGENAMEHASH_OFFSET))(nullptr);
		}

	};

