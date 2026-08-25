#pragma once
#include "unitysdk.h"

#define IBATTLEPASSDATAREPOSITORYWRAPPER_TRYGETALLFLAVORTEXTEXCELBYID_OFFSET UNITYSDK_OFFSET(0x000000)
#define IBATTLEPASSDATAREPOSITORYWRAPPER_TRYGETALLREWARDEXCELBYGROUPIDLEVEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define IBATTLEPASSDATAREPOSITORYWRAPPER_TRYGETREWARDEXCELBYID_OFFSET UNITYSDK_OFFSET(0x000000)
#define IBATTLEPASSDATAREPOSITORYWRAPPER_TRYGETALLREWARDEXCELBYGROUPID_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IBattlePassDataRepositoryWrapper_TypeDefinitionIndex = 3961;

	class IBattlePassDataRepositoryWrapper : public Il2CppObject
	{
	public:
		::System::Boolean TryGetAllFlavorTextExcelById(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + IBATTLEPASSDATAREPOSITORYWRAPPER_TRYGETALLFLAVORTEXTEXCELBYID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetAllRewardExcelByGroupIdLevel(::System::Int64 arg, ::System::Int64 arg2, Il2CppObject&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + IBATTLEPASSDATAREPOSITORYWRAPPER_TRYGETALLREWARDEXCELBYGROUPIDLEVEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean TryGetRewardExcelById(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + IBATTLEPASSDATAREPOSITORYWRAPPER_TRYGETREWARDEXCELBYID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetAllRewardExcelByGroupId(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + IBATTLEPASSDATAREPOSITORYWRAPPER_TRYGETALLREWARDEXCELBYGROUPID_OFFSET))(arg, arg2, nullptr);
		}

	};

