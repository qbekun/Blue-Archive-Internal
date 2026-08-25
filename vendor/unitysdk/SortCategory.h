#pragma once
#include "unitysdk.h"

class SortCategory;

	inline static constexpr unsigned int SortCategory_TypeDefinitionIndex = 6097;

	class SortCategory : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		SortCategory* Selected; // 0x0
		SortCategory* AssistSameEchelon; // 0x0
		SortCategory* AssistTodayComplete; // 0x0
		SortCategory* Used; // 0x0
		SortCategory* Ready; // 0x0
		SortCategory* Banned; // 0x0

	};

