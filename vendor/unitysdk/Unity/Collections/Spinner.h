#pragma once
#include "../../unitysdk.h"

#define UNITY_COLLECTIONS_SPINNER_UNLOCK_OFFSET UNITYSDK_OFFSET(0x9E38A80)
#define UNITY_COLLECTIONS_SPINNER_LOCK_OFFSET UNITYSDK_OFFSET(0x9E38AB0)

namespace Unity::Collections
{
	inline static constexpr unsigned int Spinner_TypeDefinitionIndex = 37042;

	class Spinner : public Il2CppObject
	{
	public:
		::System::Int32 m_value; // 0x10

		::System::Void Unlock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_SPINNER_UNLOCK_OFFSET))(nullptr);
		}

		::System::Void Lock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_SPINNER_LOCK_OFFSET))(nullptr);
		}

	};
}

