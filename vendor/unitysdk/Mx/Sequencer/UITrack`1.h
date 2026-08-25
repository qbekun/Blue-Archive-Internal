#pragma once
#include "../../unitysdk.h"

#define MX_SEQUENCER_UITRACK`1_COPLAYIMPL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_UITRACK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Sequencer
{
	inline static constexpr unsigned int UITrack`1_TypeDefinitionIndex = 11170;

	class UITrack`1 : public Il2CppObject
	{
	public:
		Il2CppObject* afterLoadingCallback; // 0x0
		Il2CppObject* onOpenedCallback; // 0x0

		::System::Collections::IEnumerator* CoPlayImpl()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_UITRACK`1_COPLAYIMPL_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2, ::System::Boolean arg3, ::System::Single arg4)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_UITRACK`1_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

