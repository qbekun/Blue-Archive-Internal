#pragma once
#include "unitysdk.h"

#define COOKIECOLLECTIONENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A594B0)
#define COOKIECOLLECTIONENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9A59510)
#define COOKIECOLLECTIONENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A595B0)
#define COOKIECOLLECTIONENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9A59650)

	inline static constexpr unsigned int CookieCollectionEnumerator_TypeDefinitionIndex = 29734;

	class CookieCollectionEnumerator : public Il2CppObject
	{
	public:
		::System::Net::CookieCollection* m_cookies; // 0x10
		::System::Int32 m_count; // 0x18
		::System::Int32 m_index; // 0x1C
		::System::Int32 m_version; // 0x20

		::System::Void .ctor(::System::Net::CookieCollection* arg)
		{
			((::System::Void(*)(::System::Net::CookieCollection*, ::PVOID))((::PBYTE)hIl2Cpp + COOKIECOLLECTIONENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + COOKIECOLLECTIONENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IEnumerator.MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COOKIECOLLECTIONENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COOKIECOLLECTIONENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

	};

