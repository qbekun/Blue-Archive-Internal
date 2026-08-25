#pragma once
#include "unitysdk.h"

#define ATTACHMENTFILTEREMBLEMFAVORRANK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB3490)
#define ATTACHMENTFILTEREMBLEMFAVORRANK_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB4120)
#define ATTACHMENTFILTEREMBLEMFAVORRANK_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FB4230)

	inline static constexpr unsigned int AttachmentFilterEmblemFavorRank_TypeDefinitionIndex = 2911;

	class AttachmentFilterEmblemFavorRank : public ::MX::Logic::Actions::GroggyAction
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTEREMBLEMFAVORRANK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ContainedByFilter(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTEREMBLEMFAVORRANK_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTEREMBLEMFAVORRANK_INITALLLIST_OFFSET))(arg, nullptr);
		}

	};

