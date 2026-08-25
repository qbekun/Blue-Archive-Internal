#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMECCG_ICCGEXPRESSIONACCESSIBLE_GETFIELD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int ICCGExpressionAccessible_TypeDefinitionIndex = 20446;

	class ICCGExpressionAccessible : public Il2CppObject
	{
	public:
		::System::Object* GetField(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGEXPRESSIONACCESSIBLE_GETFIELD_OFFSET))(str, nullptr);
		}

	};
}

