#pragma once
#include "unitysdk.h"

#define ATLASNODEPOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FC9F50)
#define ATLASNODEPOOL_ATLASNODEFREE_OFFSET UNITYSDK_OFFSET(0x9FCAB00)
#define ATLASNODEPOOL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FCAB40)
#define ATLASNODEPOOL_ATLASNODECREATE_OFFSET UNITYSDK_OFFSET(0x9FC9FB0)
#define ATLASNODEPOOL_CLEAR_OFFSET UNITYSDK_OFFSET(0x9FCA320)

	inline static constexpr unsigned int AtlasNodePool_TypeDefinitionIndex = 34036;

	class AtlasNodePool : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_Nodes; // 0x10
		::System::Int16 m_Next; // 0x18
		::System::Int16 m_FreelistHead; // 0x1A

		::System::Void .ctor(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + ATLASNODEPOOL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void AtlasNodeFree(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + ATLASNODEPOOL_ATLASNODEFREE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATLASNODEPOOL_DISPOSE_OFFSET))(nullptr);
		}

		::System::Int16 AtlasNodeCreate(::System::Int16 arg)
		{
			return (return (::System::Int16(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + ATLASNODEPOOL_ATLASNODECREATE_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATLASNODEPOOL_CLEAR_OFFSET))(nullptr);
		}

	};

