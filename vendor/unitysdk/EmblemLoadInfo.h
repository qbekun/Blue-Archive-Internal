#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Texture; }

#define EMBLEMLOADINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x23EB590)
#define EMBLEMLOADINFO_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x23EB740)
#define EMBLEMLOADINFO_GET_LOADEDICON_OFFSET UNITYSDK_OFFSET(0x23EB750)
#define EMBLEMLOADINFO_SET_LOADEDICON_OFFSET UNITYSDK_OFFSET(0x23EB760)
#define EMBLEMLOADINFO_SET_LOADEDBG_OFFSET UNITYSDK_OFFSET(0x23EB770)
#define EMBLEMLOADINFO_SET_LOADEDICONBG_OFFSET UNITYSDK_OFFSET(0x23EB780)
#define EMBLEMLOADINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x23EB790)
#define EMBLEMLOADINFO_GET_LOADEDBG_OFFSET UNITYSDK_OFFSET(0x23EB7A0)
#define EMBLEMLOADINFO_GET_LOADEDICONBG_OFFSET UNITYSDK_OFFSET(0x23EB7B0)

	inline static constexpr unsigned int EmblemLoadInfo_TypeDefinitionIndex = 5397;

	class EmblemLoadInfo : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::UnityEngine::Texture* _LoadedBG_k__BackingField; // 0x18
		::UnityEngine::Texture* _LoadedIcon_k__BackingField; // 0x20
		::UnityEngine::Texture* _LoadedIconBG_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMLOADINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EMBLEMLOADINFO_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* get_LoadedIcon()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMLOADINFO_GET_LOADEDICON_OFFSET))(nullptr);
		}

		::System::Void set_LoadedIcon(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + EMBLEMLOADINFO_SET_LOADEDICON_OFFSET))(arg, nullptr);
		}

		::System::Void set_LoadedBG(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + EMBLEMLOADINFO_SET_LOADEDBG_OFFSET))(arg, nullptr);
		}

		::System::Void set_LoadedIconBG(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + EMBLEMLOADINFO_SET_LOADEDICONBG_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMLOADINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::UnityEngine::Texture* get_LoadedBG()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMLOADINFO_GET_LOADEDBG_OFFSET))(nullptr);
		}

		::UnityEngine::Texture* get_LoadedIconBG()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMLOADINFO_GET_LOADEDICONBG_OFFSET))(nullptr);
		}

	};

