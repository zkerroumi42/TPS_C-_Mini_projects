#ifndef TESTT_H
#define TESTT_H


class testt
{
    public:
        /** Default constructor */
        testt();
        /** Default destructor */
        virtual ~testt();

        /** Access m_Counter
         * \return The current value of m_Counter
         */
        unsigned int Getm_Counter() { return m_Counter; }
        /** Set m_Counter
         * \param val New value to set
         */
        void Setm_Counter(unsigned int val) { m_Counter = val; }
        /** Access b
         * \return The current value of b
         */
        unsigned int Get() { return b; }
        /** Set b
         * \param val New value to set
         */
        void Set(unsigned int val) { b = val; }
        /** Access c
         * \return The current value of c
         */
        unsigned int Getc() { return c; }
        /** Set c
         * \param val New value to set
         */
        void Setc(unsigned int val) { c = val; }
        /** Access d
         * \return The current value of d
         */
        unsigned int Getd() { return d; }
        /** Set d
         * \param val New value to set
         */
        void Setd(unsigned int val) { d = val; }

    protected:

    private:
        unsigned int m_Counter; //!< Member variable "m_Counter"
        unsigned int b; //!< Member variable "b"
        unsigned int c; //!< Member variable "c"
        unsigned int d; //!< Member variable "d"
};

#endif // TESTT_H
