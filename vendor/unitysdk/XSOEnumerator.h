#pragma once
#include "unitysdk.h"

#define XSOENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E8560)
#define XSOENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x98E85B0)
#define XSOENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x98E8760)
#define XSOENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x98E8840)

	inline static constexpr unsigned int XSOEnumerator_TypeDefinitionIndex = 28185;

	class XSOEnumerator : public Il2CppObject
	{
	public:
		Il2CppObject* entries; // 0x10
		EnumeratorType* enumType; // 0x18
		::System::Int32 currentIndex; // 0x1C
		::System::Int32 size; // 0x20
		::System::Xml::XmlQualifiedName* currentKey; // 0x28
		::System::Xml::Schema::XmlSchemaObject* currentValue; // 0x30

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg, EnumeratorType* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, EnumeratorType*, ::PVOID))((::PBYTE)hIl2Cpp + XSOENUMERATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + XSOENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XSOENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XSOENUMERATOR_RESET_OFFSET))(nullptr);
		}

	};

