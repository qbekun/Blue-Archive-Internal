#pragma once
#include "../../../unitysdk.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int IndexRange_TypeDefinitionIndex = 24158;

	class IndexRange : public Il2CppObject
	{
	public:
		::System::Int64 _nFromInclusive; // 0x10
		::System::Int64 _nToExclusive; // 0x18
		Il2CppObject* _nSharedCurrentIndexOffset; // 0x20
		::System::Int32 _bRangeFinished; // 0x28

	};
}

