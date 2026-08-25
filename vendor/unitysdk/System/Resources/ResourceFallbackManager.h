#pragma once
#include "../../unitysdk.h"

#define SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x922B900)
#define SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x922B990)
#define SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x922BA00)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceFallbackManager_TypeDefinitionIndex = 24811;

	class ResourceFallbackManager : public Il2CppObject
	{
	public:
		::System::Globalization::CultureInfo* m_startingCulture; // 0x10
		::System::Globalization::CultureInfo* m_neutralResourcesCulture; // 0x18
		::System::Boolean m_useParents; // 0x20

		::System::Void .ctor(::System::Globalization::CultureInfo* arg, ::System::Globalization::CultureInfo* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Globalization::CultureInfo*, ::System::Globalization::CultureInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEFALLBACKMANAGER_GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

