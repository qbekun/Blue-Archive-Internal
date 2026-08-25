#pragma once
#include "../../unitysdk.h"

namespace Unity::Collections { class Allocator; }

#define UNITY_COLLECTIONS_NATIVEARRAYDISPOSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1E14E0)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeArrayDispose_TypeDefinitionIndex = 30903;

	class NativeArrayDispose : public Il2CppObject
	{
	public:
		::System::Object** m_Buffer; // 0x10
		::Unity::Collections::Allocator* m_AllocatorLabel; // 0x18

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAYDISPOSE_DISPOSE_OFFSET))(nullptr);
		}

	};
}

