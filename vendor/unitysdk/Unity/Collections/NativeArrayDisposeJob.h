#pragma once
#include "../../unitysdk.h"

namespace Unity::Collections { class NativeArrayDispose; }

#define UNITY_COLLECTIONS_NATIVEARRAYDISPOSEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA1E1560)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeArrayDisposeJob_TypeDefinitionIndex = 30904;

	class NativeArrayDisposeJob : public Il2CppObject
	{
	public:
		::Unity::Collections::NativeArrayDispose* Data; // 0x10

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAYDISPOSEJOB_EXECUTE_OFFSET))(nullptr);
		}

	};
}

