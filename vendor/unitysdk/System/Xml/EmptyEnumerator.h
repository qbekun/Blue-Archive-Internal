#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_EMPTYENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET UNITYSDK_OFFSET(0x99ABB50)
#define SYSTEM_XML_EMPTYENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x99ABB60)
#define SYSTEM_XML_EMPTYENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x99ABB70)
#define SYSTEM_XML_EMPTYENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x99ABBE0)

namespace System::Xml
{
	inline static constexpr unsigned int EmptyEnumerator_TypeDefinitionIndex = 27787;

	class EmptyEnumerator : public Il2CppObject
	{
	public:
		::System::Boolean System.Collections.IEnumerator.MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_EMPTYENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_EMPTYENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_EMPTYENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_EMPTYENUMERATOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

