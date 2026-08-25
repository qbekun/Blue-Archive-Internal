#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMESHOOTING_RESOURCEPRELOADER_PRELOAD_OFFSET UNITYSDK_OFFSET(0x147A950)
#define MX_MINIGAMESHOOTING_RESOURCEPRELOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14790E0)
#define MX_MINIGAMESHOOTING_RESOURCEPRELOADER__PRELOAD_G__GETADDRESSKEY|4_5_OFFSET UNITYSDK_OFFSET(0x147DD00)
#define MX_MINIGAMESHOOTING_RESOURCEPRELOADER_UNLOAD_OFFSET UNITYSDK_OFFSET(0x147B2D0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int ResourcePreloader_TypeDefinitionIndex = 15176;

	class ResourcePreloader : public Il2CppObject
	{
	public:
		Il2CppObject* particles; // 0x10
		Il2CppObject* logicEffects; // 0x18
		Il2CppObject* skillDatas; // 0x20
		Il2CppObject* obstacleData; // 0x28

		::System::Collections::IEnumerator* Preload()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_RESOURCEPRELOADER_PRELOAD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_RESOURCEPRELOADER_.CTOR_OFFSET))(nullptr);
		}

		::System::String* _Preload_g__GetAddressKey|4_5(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_RESOURCEPRELOADER__PRELOAD_G__GETADDRESSKEY|4_5_OFFSET))(str, nullptr);
		}

		::System::Void Unload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_RESOURCEPRELOADER_UNLOAD_OFFSET))(nullptr);
		}

	};
}

