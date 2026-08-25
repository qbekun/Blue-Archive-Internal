#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class IPersistentDataCache; }

#define NPA_EDITOR_PERSISTENTDATACACHEFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x9D86350)

namespace NPA::Editor
{
	inline static constexpr unsigned int PersistentDataCacheFactory_TypeDefinitionIndex = 26276;

	class PersistentDataCacheFactory : public Il2CppObject
	{
	public:
		Il2CppObject* CustomImplementation; // 0x0

		::NPA::Editor::IPersistentDataCache* Create(::System::String* str)
		{
			return (return (::NPA::Editor::IPersistentDataCache*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PERSISTENTDATACACHEFACTORY_CREATE_OFFSET))(str, nullptr);
		}

	};
}

