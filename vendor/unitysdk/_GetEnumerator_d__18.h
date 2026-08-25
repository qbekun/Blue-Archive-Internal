#pragma once
#include "unitysdk.h"

#define <GETENUMERATOR>D__18_.CTOR_OFFSET UNITYSDK_OFFSET(0x9651DE0)
#define <GETENUMERATOR>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9651E70)
#define <GETENUMERATOR>D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9651E80)
#define <GETENUMERATOR>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.LINQ.EXPRESSIONS.EXPRESSION_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9651F50)
#define <GETENUMERATOR>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9651F60)
#define <GETENUMERATOR>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9651FB0)

	inline static constexpr unsigned int <GetEnumerator>d__18_TypeDefinitionIndex = 33020;

	class <GetEnumerator>d__18 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Linq::Expressions::Expression* __2__current; // 0x18
		::System::Linq::Expressions::BlockExpressionList* __4__this; // 0x20
		::System::Int32 _i_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__18_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__18_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* System.Collections.Generic.IEnumerator_System.Linq.Expressions.Expression_.get_Current()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.LINQ.EXPRESSIONS.EXPRESSION_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

