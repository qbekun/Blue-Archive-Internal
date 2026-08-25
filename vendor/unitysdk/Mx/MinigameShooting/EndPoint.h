#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Section; }
namespace UnityEngine { class Animation; }

#define MX_MINIGAMESHOOTING_ENDPOINT_SET_SECTION_OFFSET UNITYSDK_OFFSET(0x1469E00)
#define MX_MINIGAMESHOOTING_ENDPOINT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1469E10)
#define MX_MINIGAMESHOOTING_ENDPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1469E90)
#define MX_MINIGAMESHOOTING_ENDPOINT_NEXTSECTION_OFFSET UNITYSDK_OFFSET(0x145C5F0)
#define MX_MINIGAMESHOOTING_ENDPOINT_GET_ACTIVATED_OFFSET UNITYSDK_OFFSET(0x1469EA0)
#define MX_MINIGAMESHOOTING_ENDPOINT_GET_SECTION_OFFSET UNITYSDK_OFFSET(0x1469EB0)
#define MX_MINIGAMESHOOTING_ENDPOINT_STARTSECTION_OFFSET UNITYSDK_OFFSET(0x1469EC0)
#define MX_MINIGAMESHOOTING_ENDPOINT_SET_ACTIVATED_OFFSET UNITYSDK_OFFSET(0x1469FC0)
#define MX_MINIGAMESHOOTING_ENDPOINT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1469FD0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int EndPoint_TypeDefinitionIndex = 15109;

	class EndPoint : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Section* _Section_k__BackingField; // 0x18
		::System::Boolean _Activated_k__BackingField; // 0x20
		::UnityEngine::Animation* openAni; // 0x28

		::System::Void set_Section(::MX::MinigameShooting::Section* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Section*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENDPOINT_SET_SECTION_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENDPOINT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENDPOINT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void NextSection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENDPOINT_NEXTSECTION_OFFSET))(nullptr);
		}

		::System::Boolean get_Activated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENDPOINT_GET_ACTIVATED_OFFSET))(nullptr);
		}

		::MX::MinigameShooting::Section* get_Section()
		{
			return ((::MX::MinigameShooting::Section*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENDPOINT_GET_SECTION_OFFSET))(nullptr);
		}

		::System::Void StartSection(::MX::MinigameShooting::Section* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Section*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENDPOINT_STARTSECTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_Activated(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENDPOINT_SET_ACTIVATED_OFFSET))(arg, nullptr);
		}

		::System::Void Activate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENDPOINT_ACTIVATE_OFFSET))(nullptr);
		}

	};
}

