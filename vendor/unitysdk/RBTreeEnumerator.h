#pragma once
#include "unitysdk.h"

#define RBTREEENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define RBTREEENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define RBTREEENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RBTREEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define RBTREEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define RBTREEENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define RBTREEENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int RBTreeEnumerator_TypeDefinitionIndex = 32285;

	class RBTreeEnumerator : public Il2CppObject
	{
	public:
		Il2CppObject* _tree; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _mainTreeNodeId; // 0x0
		Il2CppObject* _current; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RBTREEENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RBTREEENUMERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBTREEENUMERATOR_DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RBTREEENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RBTREEENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RBTREEENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBTREEENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

	};

