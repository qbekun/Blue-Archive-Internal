#pragma once
#include "unitysdk.h"

#define RECORDHEADER_GET_STATEPTRWITHCONTROLINDEX_OFFSET UNITYSDK_OFFSET(0x9F66AC0)
#define RECORDHEADER_GET_STATEPTRWITHOUTCONTROLINDEX_OFFSET UNITYSDK_OFFSET(0x9F66AB0)

	inline static constexpr unsigned int RecordHeader_TypeDefinitionIndex = 28823;

	class RecordHeader : public Il2CppObject
	{
	public:
		::System::Double time; // 0x10
		::System::UInt32 version; // 0x18
		::System::Int32 controlIndex; // 0x1C
		<m_StateWithoutControlIndex>e__FixedBuffer* m_StateWithoutControlIndex; // 0x1C
		<m_StateWithControlIndex>e__FixedBuffer* m_StateWithControlIndex; // 0x20
		::System::Int32 kSizeWithControlIndex; // 0x0
		::System::Int32 kSizeWithoutControlIndex; // 0x0

		::System::Object** get_statePtrWithControlIndex()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORDHEADER_GET_STATEPTRWITHCONTROLINDEX_OFFSET))(nullptr);
		}

		::System::Object** get_statePtrWithoutControlIndex()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORDHEADER_GET_STATEPTRWITHOUTCONTROLINDEX_OFFSET))(nullptr);
		}

	};

