#pragma once
#include "unitysdk.h"

#define TOPLEVELASSEMBLYTYPERESOLVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9217240)
#define TOPLEVELASSEMBLYTYPERESOLVER_RESOLVETYPE_OFFSET UNITYSDK_OFFSET(0x92174A0)

	inline static constexpr unsigned int TopLevelAssemblyTypeResolver_TypeDefinitionIndex = 24663;

	class TopLevelAssemblyTypeResolver : public Il2CppObject
	{
	public:
		::System::Reflection::Assembly* m_topLevelAssembly; // 0x10

		::System::Void .ctor(::System::Reflection::Assembly* arg)
		{
			((::System::Void(*)(::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + TOPLEVELASSEMBLYTYPERESOLVER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Type* ResolveType(::System::Reflection::Assembly* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Type*(*)(::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TOPLEVELASSEMBLYTYPERESOLVER_RESOLVETYPE_OFFSET))(arg, str, arg, nullptr);
		}

	};

