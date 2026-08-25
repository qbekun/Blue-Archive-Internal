#pragma once
#include "../../unitysdk.h"

#define UNITY_COLLECTIONS_NATIVELEAKDETECTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA1E14A0)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeLeakDetection_TypeDefinitionIndex = 30899;

	class NativeLeakDetection : public Il2CppObject
	{
	public:
		::System::Int32 s_NativeLeakDetectionMode; // 0x0

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVELEAKDETECTION_INITIALIZE_OFFSET))(nullptr);
		}

	};
}

