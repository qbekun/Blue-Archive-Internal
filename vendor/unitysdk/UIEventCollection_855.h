#pragma once
#include "unitysdk.h"

#define UIEVENTCOLLECTION_855_COOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x24A5550)
#define UIEVENTCOLLECTION_855_.CTOR_OFFSET UNITYSDK_OFFSET(0x24A5600)

	inline static constexpr unsigned int UIEventCollection_855_TypeDefinitionIndex = 5809;

	class UIEventCollection_855 : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* CoOpenAnimation(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_855_COOPENANIMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_855_.CTOR_OFFSET))(nullptr);
		}

	};

