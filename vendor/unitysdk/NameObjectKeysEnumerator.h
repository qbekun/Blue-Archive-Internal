#pragma once
#include "unitysdk.h"

#define NAMEOBJECTKEYSENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B87720)
#define NAMEOBJECTKEYSENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9B87C70)
#define NAMEOBJECTKEYSENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9B87D40)
#define NAMEOBJECTKEYSENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9B87DD0)

	inline static constexpr unsigned int NameObjectKeysEnumerator_TypeDefinitionIndex = 29577;

	class NameObjectKeysEnumerator : public Il2CppObject
	{
	public:
		::System::Int32 _pos; // 0x10
		::System::Collections::Specialized::NameObjectCollectionBase* _coll; // 0x18
		::System::Int32 _version; // 0x20

		::System::Void .ctor(::System::Collections::Specialized::NameObjectCollectionBase* arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NameObjectCollectionBase*, ::PVOID))((::PBYTE)hIl2Cpp + NAMEOBJECTKEYSENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMEOBJECTKEYSENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMEOBJECTKEYSENUMERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMEOBJECTKEYSENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

	};

