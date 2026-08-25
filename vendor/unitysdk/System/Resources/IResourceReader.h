#pragma once
#include "../../unitysdk.h"

#define SYSTEM_RESOURCES_IRESOURCEREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RESOURCES_IRESOURCEREADER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Resources
{
	inline static constexpr unsigned int IResourceReader_TypeDefinitionIndex = 24806;

	class IResourceReader : public Il2CppObject
	{
	public:
		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_IRESOURCEREADER_CLOSE_OFFSET))(nullptr);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_IRESOURCEREADER_GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

