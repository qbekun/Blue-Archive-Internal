#pragma once
#include "../unitysdk.h"

namespace Animancer { class IAnimancerComponent; }
namespace Unity::Collections { class NativeArrayOptions; }

#define ANIMANCER_ANIMATEDFLOAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x4B4490)
#define ANIMANCER_ANIMATEDFLOAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x4B44F0)
#define ANIMANCER_ANIMATEDFLOAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x4B4540)
#define ANIMANCER_ANIMATEDFLOAT_CREATEJOB_OFFSET UNITYSDK_OFFSET(0x4B4590)

namespace Animancer
{
	inline static constexpr unsigned int AnimatedFloat_TypeDefinitionIndex = 35171;

	class AnimatedFloat : public ::FlatData::ConstMinigameTBGExcelTable
	{
	public:
		::System::Void .ctor(::Animancer::IAnimancerComponent* arg, ::System::Int32 arg, ::Unity::Collections::NativeArrayOptions* arg)
		{
			((::System::Void(*)(::Animancer::IAnimancerComponent*, ::System::Int32, ::Unity::Collections::NativeArrayOptions*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMATEDFLOAT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Animancer::IAnimancerComponent* arg, ::System::String* str)
		{
			((::System::Void(*)(::Animancer::IAnimancerComponent*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMATEDFLOAT_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::Animancer::IAnimancerComponent* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Animancer::IAnimancerComponent*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMATEDFLOAT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateJob()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMATEDFLOAT_CREATEJOB_OFFSET))(nullptr);
		}

	};
}

