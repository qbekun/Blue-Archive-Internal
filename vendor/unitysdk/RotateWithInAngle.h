#pragma once
#include "unitysdk.h"

class RotateData;

#define ROTATEWITHINANGLE_ISALMOSTEQUAL_OFFSET UNITYSDK_OFFSET(0xCDB790)
#define ROTATEWITHINANGLE_ROTATETOFRONT_OFFSET UNITYSDK_OFFSET(0xCDB7B0)
#define ROTATEWITHINANGLE_STARTROTATE_OFFSET UNITYSDK_OFFSET(0xCDB850)
#define ROTATEWITHINANGLE_CONVERTSIGNANGLE_OFFSET UNITYSDK_OFFSET(0xCDB900)
#define ROTATEWITHINANGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xCDB930)

	inline static constexpr unsigned int RotateWithInAngle_TypeDefinitionIndex = 9174;

	class RotateWithInAngle : public Il2CppObject
	{
	public:
		::System::Boolean IsAlmostEqual(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ROTATEWITHINANGLE_ISALMOSTEQUAL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* RotateToFront(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ROTATEWITHINANGLE_ROTATETOFRONT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* StartRotate(RotateData* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(RotateData*, ::PVOID))((::PBYTE)hIl2Cpp + ROTATEWITHINANGLE_STARTROTATE_OFFSET))(arg, nullptr);
		}

		::System::Single ConvertSignAngle(::System::Single arg)
		{
			return ((::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ROTATEWITHINANGLE_CONVERTSIGNANGLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROTATEWITHINANGLE_.CTOR_OFFSET))(nullptr);
		}

	};

