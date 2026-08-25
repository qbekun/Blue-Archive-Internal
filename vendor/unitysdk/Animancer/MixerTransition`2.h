#pragma once
#include "../unitysdk.h"

#define ANIMANCER_MIXERTRANSITION`2_INITIALIZESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERTRANSITION`2_GET_DEFAULTPARAMETER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERTRANSITION`2_COPYFROM_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERTRANSITION`2_GET_THRESHOLDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERTRANSITION`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int MixerTransition`2_TypeDefinitionIndex = 35243;

	class MixerTransition`2 : public ::System::Resources::RuntimeResourceSet
	{
	public:
		::Il2CppArray<::System::Object*>* _Thresholds; // 0x0
		::System::String* ThresholdsField; // 0x0
		Il2CppObject* _DefaultParameter; // 0x0
		::System::String* DefaultParameterField; // 0x0

		::System::Void InitializeState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERTRANSITION`2_INITIALIZESTATE_OFFSET))(nullptr);
		}

		Il2CppObject&* get_DefaultParameter()
		{
			return (return (Il2CppObject&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERTRANSITION`2_GET_DEFAULTPARAMETER_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERTRANSITION`2_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Object[]&* get_Thresholds()
		{
			return (return (::System::Object[]&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERTRANSITION`2_GET_THRESHOLDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERTRANSITION`2_.CTOR_OFFSET))(nullptr);
		}

	};
}

